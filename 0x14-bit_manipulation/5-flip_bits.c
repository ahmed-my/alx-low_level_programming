#include "main.h"
/**
 * flip_bits - function that returns the bit number
 * @n: integer number 1
 * @m: interger number 2
 * Return: number of bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	while (exclusive > 0)
	{
		count = count + exclusive & 1;
		exclusive >>= 1;
	}
	return (count);
}
