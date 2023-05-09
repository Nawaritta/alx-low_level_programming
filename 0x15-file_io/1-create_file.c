#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 * Return: int value
 */
int create_file(const char *filename, char *text_content)
{
	int fl, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fl == -1)
		return (-1);

	if (text_content != NULL)
	{

		while (text_content[len])
			len++;

		wrote = write(fl, text_content, len);

		if (wrote == -1)
			return (-1);
	}
	if (close(fl) == -1)
		return (-1);
	return (1);
}
