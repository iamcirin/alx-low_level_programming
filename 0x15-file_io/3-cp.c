#include "main.h"


/**
 * _exit_fun - a function that handles the error printing out err messages
 * with the exit number
 *
 * @err: the exit number
 * @s: file name
 * @file_des: file descrptr
 * Return: return 0
 */
int _exit_fun(int err, char *s, int file_des)
{
	switch (err)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(err);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(err);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(err);
		case 100:
			dprintf(STDERR_FILENO, "Error; Can't clse fd %d\n", file_des);
			exit(err);
		default:
			return (0);
	}
}

/**
 * main - a program that copies text content from file to another
 * @argc: number of args
 * @argv: list of args
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	int first_file, second_file;
	int sts, sts2;
	int close_file1, close_file2;
	char input_buff[1024];

	if (argc != 3)
		_exit_fun(97, NULL, 0);

	first_file = open(argv[1], O_RDONLY);
	if (first_file == -1)
		_exit_fun(98, argv[1], 0);

	second_file = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 664);

	if (second_file == -1)
		_exit_fun(99, argv[2], 0);

	while ((sts = read(first_file, input_buff, 1024)) != 0)
	{
		if (sts == -1)
			_exit_fun(98, argv[1], 0);
		sts2 = write(second_file, input_buff, sts);
		if (sts2 == -1)
			_exit_fun(99, argv[2], 0);
	}

	close_file1 = close(first_file);
	if (close_file1 == -1)
		_exit_fun(100, NULL, first_file);
	close_file2 = close(second_file);
	if (close_file2 == -1)
		_exit_fun(100, NULL, second_file);
	return (0);
}
