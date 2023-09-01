#include "main.h"
/**
 * print_binary - function to print binary number
 * @n: binary number
 *
 */
void print_binary(unsigned long int n)
{
	int i;
	int significantBitFound = 0;

	for (i = 63; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
		{
			_putchar('1');
			significantBitFound = 1;
		}
		else if (significantBitFound)
		{
			_putchar('0');
		}
	}

	if (significantBitFound == 0)
	{
		_putchar('0');
	}
}
