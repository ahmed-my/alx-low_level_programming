#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to char
 * @text_content: pointer to char
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int w_write, lenght, file_descriptor = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_write = write(file_descriptor, text_content, lenght);

	if (file_descriptor == -1 || w_write == -1)
	{
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
