#include"main.h"

/**
 * create_file - a function that creates a file and writes in it
 * @filename: the file to create
 * @text_content: the text to create
 * Return: returns 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, stat, wnum = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[wnum] != '\0')
			wnum++;

		stat = write(fp, text_content, wnum);

		if (stat == -1)
			return (-1);
	}

	close(fp);
	return (1);
}
