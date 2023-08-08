#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - file created.
 * @filename: The nameof file pointing to the pointer created.
 * @text_content: string ceated pointed to by the pointer.
 *
 * Return: If on failure - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_open, wf, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	file_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wf = write(file_open, text_content, l);

	if (file_open == -1 || wf == -1)
		return (-1);

	close(file_open);

	return (1);
}
