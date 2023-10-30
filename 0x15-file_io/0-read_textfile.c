#include "main.h"

/**
 * read_textfile - a function that write to the console num of letters
 * @filename: a pointer to the filename
 * @letters: number of letters to write to trhe console
 * Return: returns num
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_fun, num;
	char *input_buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	input_buff = malloc(sizeof(char) * letters);

	if (input_buff == NULL)
	{
		free(input_buff);
		return (0);
	}

	read_fun = read(fd, input_buff, letters);
	if (read_fun == -1)
		return (0);

	num = write(STDOUT_FILENO, input_buff, read_fun);
	if (num == -1 || read_fun != num)
		return (0);
	free(input_buff);
	close(fd);
	return (num);
}
