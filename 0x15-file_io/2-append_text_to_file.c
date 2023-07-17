#include"main.h"

/**
 * append_text_to_file - a function that appends text to file
 * @filename: the name of the file
 * @text_content: a content to write in the file
 * Return: returns -1 or wnum
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, stat, wnum = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_APPEND | O_WRONLY);

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
