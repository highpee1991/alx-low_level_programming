#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_addr - address printer.
 * @ptr: magic pointer.
 * Return: return no value.
*/
void print_addr(char *ptr)
{
	int j;
	int begins;
	char system;

	printf("Entry point address: 0x");

	system = ptr[4] + '0';
	if (system == '1')
	{
		begins = 26;
		printf("80");
		for (j = begins; j >= 22; j--)
		{
			if (ptr[j] > 0)
				printf("%x", ptr[j]);
			else if (ptr[j] < 0)
				printf("%x", 256 + ptr[j]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (system == '2')
	{
		begins = 26;
		for (j = begins; j > 23; j--)
		{
			if (ptr[j] >= 0)
				printf("%02x", ptr[j]);

			else if (ptr[j] < 0)
				printf("%02x", 256 + ptr[j]);

		}
	}
	printf("\n");
}

/**
 * print_type - type print.
 * @ptr: magic pointer.
 * Return: return no value.
*/
void print_type(char *ptr)
{
	char types = ptr[16];

	if (ptr[5] == 1)
		types = ptr[16];
	else
		types = ptr[17];

	printf("Type: ");
	if (types == 0)
		printf("NONE (No file type)\n");
	else if (types == 1)
		printf("REL (Relocatable file)\n");
	else if (types == 2)
		printf("EXEC (Executable file)\n");
	else if (types == 3)
		printf("DYN (Shared object file)\n");
	else if (types == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", types);
}

/**
 * print_osabi - osabi printer
 * @ptr: magic pointer.
 * Return: return no value.
*/
void print_osabi(char *ptr)
{
	char osabis = ptr[7];

	printf("OS/ABI: ");
	if (osabis == 0)
		printf("UNIX - System V\n");
	else if (osabis == 2)
		printf("UNIX - NetBSD\n");
	else if (osabis == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabis);

	printf("ABI Version: %d\n", ptr[8]);
}


/**
 * print_version - version printer.
 * @ptr: magic pointer.
 * Return: return no value.
*/
void print_version(char *ptr)
{
	int versions = ptr[6];

	printf("Version: %d", versions);

	if (versions == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_data - data printer.
 * @ptr: magic pointer.
 * Return: return no value.
*/
void print_data(char *ptr)
{
	char datas = ptr[5];

	printf("Data: 2's complement");
	if (datas == 1)
		printf(", little endian\n");

	if (datas == 2)
		printf(", big endian\n");
}
/**
 * print_magic - magic information printer.
 * @ptr: magic pointer.
 * Return: return no value.
*/
void print_magic(char *ptr)
{
	int bts;

	printf("Magic: ");

	for (bts = 0; bts < 16; bts++)
		printf(" %02x", ptr[bts]);

	printf("\n");

}

/**
 * check_sys - system version checker.
 * @ptr: magic pointer.
 * Return: return no value.
*/
void check_sys(char *ptr)
{
	char system = ptr[4] + '0';

	if (system == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(ptr);

	if (system == '1')
		printf("Class: ELF32\n");

	if (system == '2')
		printf("Class: ELF64\n");

	print_data(ptr);
	print_version(ptr);
	print_osabi(ptr);
	print_type(ptr);
	print_addr(ptr);
}

/**
 * check_elf - check elf file is present.
 * @ptr: magic pointer.
 * Return: 1 if it is an elf file. else if 0.
*/
int check_elf(char *ptr)
{
	int address = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (address == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * main - check ELf info.
 * @argc: arguments number to check.
 * @argv: arguments vectors.
 * Return: Return 0 success.
*/
int main(int argc, char *argv[])
{
	int fds, ret_reads;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fds = open(argv[1], O_RDONLY);

	if (fds < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fds, 0, SEEK_SET);
	ret_reads = read(fds, ptr, 27);

	if (ret_reads == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_sys(ptr);
	close(fds);

	return (0);
}
