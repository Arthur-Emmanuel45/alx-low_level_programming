#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the content to apppend
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t pd, w;
	int lenght;

	if (filename != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	pd = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		return (-1);

	w = write(pd, text_content, lenght);

	if (pd == -1 || w == -1)
		return (-1);

	close(pd);

	return (1);
}
