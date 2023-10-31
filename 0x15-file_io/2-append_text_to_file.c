#include "main.h"
/**
 * append_text_to_file - a function that append some text into file
 * whithout deleting the previous text already exists
 *
 * @filenam: filename pointer
 * @text_content: the content to be written insidde the text
 * Return: returns -1 pr 1
 */
int append_text_to_file(const char *filenam, char *text_content)
{
	int fp, sts, i = 0;

	if (filenam == NULL)
		return (-1);
	fp = open(filenam, O_APPEND | O_WRONLY);
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
