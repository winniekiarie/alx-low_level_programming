#include "main.h"
#include <stdio.h>


/**
 * error_file - prints an error message when an I/O operation fails
 * @file_from: the file descriptor of the source file
 * @file_to: the file descriptor of the destination file
 * @argv: an array of command-line arguments
 *
 * Return: void
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success, otherwise error code.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	do {
		nwr = read(file_from, buf, 1024);
		if (nwr == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, nwr);
		if (nwr == -1)
			error_file(0, -1, argv);
	} while (nwr == 1024);

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
