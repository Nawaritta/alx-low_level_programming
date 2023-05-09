#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: file to read
 * @letters: number of bytes to read
 * Return: number of printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl, count, wrote;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL || filename == NULL)
		return (0);

	fl = open(filename, O_RDWR);

	if (fl == -1)
		return (0);

	count = read(fl, buff, letters);

	if (count == -1)
		return (0);

	wrote = write(STDOUT_FILENO, buff, count);

	if (wrote == -1)
		return (0);

	if (close(fl) == -1)
		return (0);

	free(buff);
	return (count);
}
