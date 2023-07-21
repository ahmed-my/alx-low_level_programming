#include "main.h"
/**
  * more_numbers - function to print 10 times the number 0 - 14
  *
  * Return: 0
  */
void more_numbers(void)
{
	int n, count;
	count = 1;

	while (count <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		}
		_putchar('\n');
		count++;
	}
}
