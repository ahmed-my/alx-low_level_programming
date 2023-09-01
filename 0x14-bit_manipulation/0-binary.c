#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if ((*b != '0') && (*b != '1'))
		{
			return (0);
		}
		decimal_value = (decimal_value << 1) + (*b - '0');
		b++;
	}
	return (decimal_value);
}
