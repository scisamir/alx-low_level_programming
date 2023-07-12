#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (!text_content && fd < 0)
		return (-1);

	while (text_content[len])
		len++;

	wd = write(fd, text_content, len);
	if (wd < 0)
		return (-1);

	close(fd);

	return (1);
}
