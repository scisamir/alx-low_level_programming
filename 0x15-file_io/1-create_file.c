#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wd, len = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		*text_content = '\0';

	while (text_content[len])
		len++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd < 0)
		return (-1);

	wd = write(fd, text_content, len);
	if (wd < 0)
		return (-1);

	close(fd);

	return (1);
}
