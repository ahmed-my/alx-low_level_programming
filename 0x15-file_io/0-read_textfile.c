#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - text file to print
 * @filename: pointer to char
 * @letters: letters to be read
 * Return: actual number of letters
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer_location;
	ssize_t file_descriptor;
	ssize_t r_read;
	ssize_t w_write;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer_location = malloc(sizeof(char) * letters);
	r_read = read(file_descriptor, buffer_location, letters);
	w_write = write(STDOUT_FILENO, buffer_location, r_read);

	free(buffer_location);
	close(file_descriptor);
	return (w_write);
}
