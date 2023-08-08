#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

char *created_buffer(char *str_file);
void closed_file(int file_d);

/**
 * created_buffer - Allocated bytes (1024) for buffer.
 * @str_file: file name buffer is storing.
 *
 * Return: pointer return to allocated buffer.
 */
char *created_buffer(char *str_file)
{
	char *buffers;

	buffers = malloc(sizeof(char) * 1024);

	if (buffers == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can not write to %s\n", str_file);
		exit(99);
	}

	return (buffers);
}

/**
 * closed_file - file descriptor closed.
 * @file_d: The file descriptor to be closed.
 */
void closed_file(int file_d)
{
	int ch;

	ch = close(file_d);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - content of file copied to another.
 * @argc: arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If arguments counter is incorrect - exit code 97.
 * If file_from not exist or could not be read - exit code 98.
 * If file_to could not be created or written - exit code 99.
 * If file_to or file_from could not be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = created_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	closed_file(from);
	closed_file(to);

	return (0);
}
