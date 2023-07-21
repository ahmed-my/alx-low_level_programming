#include "main.h"
/**
  * print_line - function to print line
  * @n: The integer to check
  *
  * Return: 0
  */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
