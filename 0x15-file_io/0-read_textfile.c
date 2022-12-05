#include "main.h"
/**
 *read_textfile - reads text file and prints to stdout
 *@filename: name of txt file
 *@letters: number of letters it should print
 *Return: num of letters printed and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t charsread, charswrit;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	charsread = read(fd, buf, letters);
	if (charsread < 0)
		return (0);
	buf[charsread] = '\0';
	charswrit = write(STDOUT_FILENO, buf, charsread);
	if (charswrit != charsread)
		return (0);
	free(buf);
	close(fd);
	return (charswrit);
}
