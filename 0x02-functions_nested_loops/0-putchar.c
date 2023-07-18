#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: Success (0);
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
