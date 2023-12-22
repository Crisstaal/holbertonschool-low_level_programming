#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to the standard output
 *
 * @filename: pointer
 * @letters: letters printed
 * Return: the actual numnber of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t numread, written;
	int filedesc;
	char *str;

	if (!filename)
	{
		return (0);
	}
	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);
	str = malloc(sizeof(char) * letters);

	if (str == NULL)
	{
		close(filedesc);
		return (0);
	}
	numread = read(filedesc, str, letters);
	written = write(STDOUT_FILENO, str, numread);
	if (numread == -1 || written == -1)
	{
		close(filedesc);
		free(str);
		return (0);
	}
	close(filedesc);
	free(str);
	return (written);
}
