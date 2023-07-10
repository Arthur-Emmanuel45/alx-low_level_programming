#include "main.h"
/**
 * create_file -  a function that creates a file.
 * @filename: the name of the file
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure(file can
 * not be created, file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t  pd, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	pd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(pd, text_content, len);

	if (pd == -1 || w == -1)
		return (-1);

	close(pd);

	return (1);
}
