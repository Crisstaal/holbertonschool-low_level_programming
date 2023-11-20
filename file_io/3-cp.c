#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * open_file - if there an open file
 * @argv: argument vector
 * @file_from: intial file
 * @file_to: ending file
 * Return: nothing
 */

void open_file(int file_to, int file_from, char *argv[])
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
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
	int file_to, file_from;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to %s\n", argv[0]);
		exit(97);
	}
	
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while ((characters = read(file_from, buff, sizeof(buff))) > 0) {
		written = write(file_to, buff, characters);
		if (written != characters)
		{
			dprintf(STDERR_FILENO, "Error: Write incomplete\n");
			exit(100);
		}
	}
	
	if (characters == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	
	if (close(file_to) == -1){
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", file_to);
	exit(100);
	}
	
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", file_from);
	exit(100);
	}

	return (0);
}
