#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - A program to print from n to 98
 * @n: The integer to check
 *
 * Return: Success 0;
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d", n--);
			printf(",");
			printf(" ");
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d", n++);
			printf(",");
			printf(" ");
		}
		printf("%d\n", n);
	}
}

