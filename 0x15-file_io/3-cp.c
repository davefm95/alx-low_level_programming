#include "main.h"
/**
 *main - copiies file content of one file to another
 *@argc: number of args to main
 *@argv: array of args to main
 *Return: 0
 */
int main(int argc, char **argv)
{
	char buf[1024];
	struct stat f1, f2;
	int fd1, fd2, chars = 0, charsread = 0, charswrit = 0;

	if (argc != 3)
	{
		dprintf(3, "Usage: cp file_from file_to");
		exit(97);
	}
	if ((stat(*(argv + 1), &f1) != 0))
	{
		dprintf(3, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	fd1 = open(*(argv + 1), O_RDWR);
	if (fd1 == -1)
	{
		dprintf(3, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	if (stat(*(argv + 2), &f2) == 0)
		fd2 = open(*(argv + 2), O_RDWR | O_TRUNC | O_APPEND);
	else
		fd2 = open(*(argv + 2), O_CREAT | O_RDWR | O_APPEND, 00664);
	if (fd2 == -1)
	{
		dprintf(3, "Error: Can't write to %s\n", *(argv + 2));
		exit(99);
	}
	while ((chars = read(fd1, buf, 1024)) > 0)
	{
		charsread += chars;
		charswrit += write(fd2, buf, chars);
		if (charswrit != charsread)
		{
			dprintf(3, "Error: Can't write to %s\n", *(argv + 2));
			exit(99);
		}
	}
	if (chars == -1)
	{
		dprintf(3, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	if (close(fd1) == -1 || close(fd2) == -1)
	{
		dprintf(3, "Error: Can't close fd %d\n", fd1 == -1 ? fd1 : fd2);
		exit(100);
	}
	return (0);
}
