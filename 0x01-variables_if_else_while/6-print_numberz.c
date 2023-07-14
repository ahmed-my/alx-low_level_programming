#include <stdio.h>
/**
 * main - entry point
 *
 * program to print all single digit number of base 10.
 * Return: Always 1 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		purchar(num + '0');
	}
	putchar('\n');
	return (0);
}
