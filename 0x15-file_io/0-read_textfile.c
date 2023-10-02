#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: The pointer to the name of file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int dir;
	ssize_t rd, wrt;
	char *txt_buff;

	if (filename == NULL)
		return (0);

	txt_buff = malloc(sizeof(char) * letters);
	if (txt_buff == NULL)
		return (0);

	dir = open(filename, O_RDONLY);
	if (dir == -1)
	{
		free(txt_buff);
		return (0);
	}

	rd = read(dir, txt_buff, letters);
	if (rd == -1)
	{
		free(txt_buff);
		close(dir);
		return (0);
	}

	wrt = write(STDOUT_FILENO, txt_buff, rd);
	if (wrt == -1 || wrt != rd)
	{
		free(txt_buff);
		close(dir);
		return (0);
	}

	free(txt_buff);
	close(dir);
	return (wrt);
}
