#include "main.h"

#define BUFF_SIZE 1024

/**
 * handleExit - handles the error of a failed, open or write
 * @message: the error message
 * @type: message type
 * @code: exit code
 *
 * Return: Nothing
 */

void handleExit(const char *message, const char *type, int code)
{
	dprintf(2, "%s %s\n", message, type);
	exit(code);
}


/**
 * handleCloseErr - handles the error of a failed close
 * @message: the error message
 * @type: message type
 * @code: exit code
 *
 * Return: Nothing
 */

void handleCloseErr(const char *message, int type, int code)
{
	dprintf(2, "%s %d\n", message, type);
	exit(code);
}


/**
 * main - a program that copies the content of a file to another file
 * @ac: argument count to the program
 * @av: argument array to the program
 *
 * Return: 0 on Success, exits with some error codes on failure
 */

int main(int ac, char *av[])
{
	int file_from_od, file_to_od, read_bytes, written_bytes;
	char *file_from = av[1];
	char *file_to = av[2];
	char buffer[BUFF_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from_od = open(file_from, O_RDONLY);
	if (file_from_od < 0)
		handleExit("Error: Can't read from file", file_from, 98);

	file_to_od = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (file_to_od < 0)
		handleExit("Error: Can't write to", file_to, 99);

	while ((read_bytes = read(file_from_od, buffer, BUFF_SIZE)) > 0)
	{
		written_bytes = write(file_to_od, buffer, read_bytes);
		if (written_bytes < 0)
			handleExit("Error: Can't write to", file_to, 99);
	}

	if (close(file_from_od) < 0)
		handleCloseErr("Error: Can't close fd", file_from_od, 100);

	if (close(file_to_od) < 0)
		handleCloseErr("Error: Can't close fd", file_to_od, 100);

	return (0);
}
