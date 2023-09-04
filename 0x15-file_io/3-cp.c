#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *buffer_to_create(char *filename);
void file_close(int file_descriptor);

/**
 * buffer_to_create - 1024 bytes allocated
 * @filename: pointer to char
 * Return: pointer to the allocated buffer
 *
 */
char *buffer_to_create(char *filename)
{
	char *buffer_space;

	buffer_space = malloc(sizeof(char) * 1024);

	if (buffer_space == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer_space);
}

/**
 * file_close - descriptor of close file
 * @file_descriptor: the file to be closed
 *
 */
void file_close(int file_descriptor)
{
	int c_close;

	c_close = close(file_descriptor);

	if (c_close == -1)
	{
		dprintf(STDERR_FILENO,
				"Error; Can't close file_descriptor %d\n", file_descriptor);
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 * Description: incorrect argument count - exit code 97
 * file does not exit or demaged - exit code 98
 * file can not be created or write onto - exit code 99
 * file can not be closed - exit code 100
 *
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r_read, w_write;
	char *buffer_space;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer_space = buffer_to_create(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r_read = read(file_from, buffer_space, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buffer_space);
			exit(98);
		}

		w_write = write(file_to, buffer_space, r_read);
		if (file_to == -1 || w_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer_space);
			exit(99);
		}

		r_read = read(file_from, buffer_space, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r_read > 0);

	free(buffer_space);
	file_close(file_from);
	file_close(file_to);

	return (0);
}
