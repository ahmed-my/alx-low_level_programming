#include "main.h"
/**
  * _isdigit - Function to check for a digit
  * @c: The integer to check
  *
  * Return: 0
  */
int _isdigit(int c)
{
	for (c = 0; c <= 9; c++)
	{
		if ((c / 10 + '0') <= 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
