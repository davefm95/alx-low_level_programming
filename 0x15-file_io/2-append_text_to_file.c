#include "main.h"
/**
 *append_text_to_file - appends text to an already exiating file
 *@filename: name of file
 *@text_content: text to be appemded to file
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, charswrit = 0;
	struct stat stats;

	if (!filename)
		return (-1);
	if (stat(filename, &stats) != 0)
		return (-1);
	if ((stats.st_mode & S_IWUSR) == 0)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		charswrit = write(fd, text_content, strlen(text_content));
		if (charswrit != (int)strlen(text_content))
			return (-1);
	}
	close(fd);
	return (1);
}
