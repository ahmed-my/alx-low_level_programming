#include "main.h"
/**
 * append_text_to_file - function that appends text
 * @filename: pointer to char
 * @text_content: pointer of text to char
 * Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w_write, o_open, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	o_open = open(filename, O_WRONLY | O_APPEND);
	w_write = write(o_open, text_content, lenght);

	if (w_write == -1 || o_open == -1)
	{
		return (-1);
	}
	close(o_open);
	return (1);
}
