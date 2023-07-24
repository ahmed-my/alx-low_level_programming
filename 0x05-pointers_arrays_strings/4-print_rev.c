#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int count = 0;
	int str_len;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (str_len = count; str_len > 0; str_len--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

