#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - The function to check
 * @n: integer to check
 *
 * Return: 0
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
