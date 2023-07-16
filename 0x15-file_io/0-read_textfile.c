#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: a file to read from
 * @letters: a number of letters to read
 * Return: returns 0 or n
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int input;
	ssize_t r_c, n;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}

	input = open(filename, O_RDONLY);
	if (input == -1)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		free(str);
		return (0);
	}

	r_c = read(input, str, letters);
	if (r_c == -1)
		return (0);

	n = write(STDOUT_FILENO, str, r_c);

	if (n == -1 || r_c != n)
		return (0);

	free(str);
	close(input);
	return (n);
}
