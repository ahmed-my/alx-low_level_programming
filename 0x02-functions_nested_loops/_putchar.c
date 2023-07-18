#include "main.h"
#include <unistd.h>

/**
 * _putchar: prints a char
 *
 * print_alphabet(): print letters of the alphabet in lower case
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
