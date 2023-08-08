#include "main.h"

/**
 * append_text_to_file - Text appended to the end of a file.
 * @filename: The name of the file pointed to by pointer.
 * @text_content: Text added to the end of file.
 *
 * Return: If function `fails or filename is NULL - -1.
 *         If file does not exist no write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_open, wf, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	file_open = open(filename, O_WRONLY | O_APPEND);
	wf = write(file_open, text_content, l);

	if (file_open == -1 || wf == -1)
		return (-1);

	close(file_open);

	return (1);
}

