#include "main.h"
#include <stdio.h>

/**
 * open_file - if there an open file
 *
 * @argv: argument vector
 * @file_from: intial file
 * @file_to: ending file
 * Return: nothing
 */

void open_file(int file_to, int file_from, char *argv[])
{
	if (file_to == -1)
	{
		printf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	if (file_from == -1)
	{
		printf(STDERR_FILEN0, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}

/**
 * main - copies file content to another file
 * @argv: argument vector
 * @argc: argument character
 * Return: 0 if successfull
 */

int main(int argc, char *argv[])
{
	ssize_t characters;
	ssize_t written;
	char buff[1024];
	int error;
	
	if (argc != 3)
	{
		printf(STDERR_FILENO, "Usage: cp file_from file_to %s\n");
		exit(97);
	}
	
	file_to = open(argv[1], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 664);
	file_from = open(argv[2], O_RDONLY);
	open_file(file_to, file_from, argv);

	characters = 1024;
	if (characters == 1024)
	{
		characters = read(file_from, buff, 1024);
		if (characters == -1)
			open_file(-1, 0, argv);
		written = write(file_to, 1024, buff);
		if (written == -1)
		open_file(0, -1, argv);
	}

	open_file == close(file_to);
	{
		printf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", file_to);
	exit(100);
	}
	
	open_file = close(file_from);
	if (open_file == -1)
	{
	printf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", file_from);
	exit (100);
	}
	return (0);
}
