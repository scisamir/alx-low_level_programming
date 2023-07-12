#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file it should read and print from
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *str;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	rd = read(fd, str, letters);
	if (rd < 0)
	{
		free(str);
		return (0);
	}

	wd = write(STDOUT_FILENO, str, rd);
	if (wd < 0 || wd < rd)
	{
		free(str);
		return (0);
	}

	free(str);
	close(fd);

	return ((ssize_t)wd);
}
