#include "main.h"
/**
  * prime_number - prints integers
  *
  * Return: 0
  */
void prime_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		prime_number(i / 10);
	}
	_putchar(1 % 10 + '0');
}
