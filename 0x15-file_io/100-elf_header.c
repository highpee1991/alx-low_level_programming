#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_hex_bytes - Print hexadecimal bytes from a range of the array.
 * @ptr: Pointer to the array.
 * @start: Start index of the range.
 * @end: End index of the range.
 *
 * Return: No return value.
 */
void print_hex_bytes(char *ptr, int start, int end)
{
	int i;

	for (i = start; i <= end; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}

/**
 * print_class - Print ELF class information.
 * @ptr: Pointer to the ELF header array.
 *
 * Return: No return value.
 */
void print_class(char *ptr)
{
	char elf_class = ptr[EI_CLASS];

	printf("Class: ");
	if (elf_class == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (elf_class == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("<unknown: %x>\n", elf_class);
		exit(98);
	}
}

/**
 * print_data - Print ELF data information.
 * @ptr: Pointer to the ELF header array.
 *
 * Return: No return value.
 */
void print_data(char *ptr)
{
	char elf_data = ptr[EI_DATA];

	printf("Data: 2's complement, ");
	if (elf_data == ELFDATA2LSB)
	{
		printf("little endian\n");
	}
	else if (elf_data == ELFDATA2MSB)
	{
		printf("big endian\n");
	}
	else
	{
		printf("<unknown: %x>\n", elf_data);
		exit(98);
	}
}

/**
 * check_elf - Check if the file is an ELF file.
 * @ptr: Pointer to the ELF header array.
 *
 * Return: 1 if the file is an ELF file, 0 otherwise.
 */
int check_elf(char *ptr)
{
	return (ptr[0] == ELFMAG0 &&
			ptr[1] == ELFMAG1 &&
			ptr[2] == ELFMAG2 &&
			ptr[3] == ELFMAG3);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int fds, ret_reads;
	char ptr[27];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fds = open(argv[1], O_RDONLY);
	if (fds < 0)
	{
		perror("open");
		exit(98);
	}

	lseek(fds, 0, SEEK_SET);
	ret_reads = read(fds, ptr, 27);
	if (ret_reads == -1)
	{
		perror("read");
		exit(98);
	}

	if (!check_elf(ptr))
	{
		fprintf(stderr, "Err: It is not an ELF\n");
		exit(98);
	}

	printf("ELF Header:\n");
	print_hex_bytes(ptr, 0, 15);
	print_class(ptr);
	print_data(ptr);

	close(fds);
	return (0);
}
