#include "main.h"
/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments passed into the command line
 * @argv: array of strings that representing the arguments
 * Return: int value
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, readc, writtenc;
	char c, buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1 || read(fd_from, &c, 1) == 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((readc = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		writtenc = write(fd_to, buffer, readc);
		if (writtenc == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	if (readc == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100); }
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100); }
	return (0);
}
