#include "main.h"

/**
 * exit_error - a function that prints the error message
 * @err: an int
 * @st: a pointer to a string
 * @fd: an int
 * Return: returns 0
 */

int exit_error(int err, char *st, int fd)
{
	switch (err)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(err);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", st);
			exit(err);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", st);
			exit(err);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(err);
		default:
			return (0);
	}
}

/**
 * main - an entry point
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int fp_in, fp_out;
	int stat, w_stat;
	int cl_in, cl_out;
	char buff[1024];

	if (argc != 3)
		exit_error(97, NULL, 0);
	fp_in = open(argv[1], O_RDONLY);
	if (fp_in == -1)
		exit_error(98, argv[1], 0);
	fp_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fp_out == -1)
		exit_error(99, argv[2], 0);

	while ((stat = read(fp_in, buff, 1024)) != 0)
	{
		if (stat == -1)
			exit_error(98, argv[1], 0);
		w_stat = write(fp_out, buff, stat);

		if (w_stat == -1)
			exit_error(99, argv[2], 0);
	}

	cl_in = close(fp_in);
	if (cl_in == -1)
		exit_error(100, NULL, fp_in);

	cl_out = close(fp_out);
	if (cl_out == -1)
		exit_error(100, NULL, fp_out);
	return (0);
}
