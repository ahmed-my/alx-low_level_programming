#include "main.h"
/**
 * binary_to_uint - function to convert binary to decimal
 * @b: pointer to char
 * Return: converted number or 0 if NULL
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (; *b; b++)
	{
		if ((*b != '0') && (*b != '1'))
			return (0);
		decimal_value = (decimal_value << 1) + (*b - '0');
	}

	return (decimal_value);
}
