#include "main.h"
#include <string.h>
/**
 *create_file - creates a file and writes to it
 *@filename: name of dile to create
 *@text_content: text to be written to file
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, charswrit = 1;
	struct stat stats;

	if (!filename)
		return (-1);
	if (stat(filename, &stats) == 0)
		fd = open(filename, O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (charswrit);
	charswrit = write(fd, text_content, strlen(text_content));
	if (charswrit != (int)strlen(text_content))
		return (-1);
	close(fd);
	return (1);
}
