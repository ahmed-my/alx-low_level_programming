#include "main.h"
/**
 * print_binary - function to print binary number
 * @n: binary number
 *
 */
void print_binary(unsigned long int n)
{
	int i;
	bool significantBitFound = false;

	for (i = 63; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;
		if (n & mask)
		{
			_putchar('1');
			significantBitFound = true;
		}
		else if (significantBitFound)
		{
			_putchar('0');
		}
	}

	if (!significantBitFound)
	{
		_putchar('0');
	}
}
