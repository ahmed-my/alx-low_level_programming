#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: The integer to check
 *
 * Return: Success 0
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				product = i * j;
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(product + '0');
				}
				if (product <= 99)
				{
					_putchar(' ');
					_putchar(product + '0');
				}
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

