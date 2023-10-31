#include "main.h"

/**
 * create_file - a function that creates a file and write content in it
 * @filename: filaname pointer
 * @text_content: text to be written inside the file
 * Return: returns 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, sts, i = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;

		sts = write(fp, text_content, i);
		if (sts == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
