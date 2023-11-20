#include "main.h"
/**
 * append_text_to_file - appends text at the end of a line
 *
 * @filename: name of file
 * @text_content: null terminated string
 *
 * Return: 1 if file exists or -1 if it doesnt
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int letters = 0;
	int filedesc;
	int rwr;

	if (filename == NULL)
		return (-1);

	filedesc = open(filename, O_WRONLY | O_APPEND);

		if (filedesc == -1)
		{
			return (-1);
		}
	if (text_content != NULL)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		rwr = write(filedesc, text_content, letters);
	}
	if (rwr == -1)
	{
		return (-1);
	}
	close(filedesc);

	return (1);
}
