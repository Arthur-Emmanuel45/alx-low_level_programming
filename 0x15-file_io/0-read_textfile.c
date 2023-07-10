#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the contect to read
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0 or
 * if filename is NULL return 0 or
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;

	ssize_t r, w, pd;

	buffer = malloc(sizeof(char) * letters);

	pd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);

	r = read(pd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (pd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(pd);

	return (w);
}
