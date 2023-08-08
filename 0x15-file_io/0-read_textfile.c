#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read and write contents of a file/content read.
 * @filename: The name of the file to read/file read.
 * @letters: The number of bytes to read from the file/bytes read.
 *
 * Return: On success, the number of bytes read and written to stdout.
 *         On failure, 0 or appropriate error code.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffers;
	ssize_t file_open, wf, tf;

	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
		return (0);
	buffers = malloc(sizeof(char) * letters);
	tf = read(file_open, buffers, letters);
	wf = write(STDOUT_FILENO, buffers, tf);

	free(buffers);
	close(file_open);
	return (wf);
}
