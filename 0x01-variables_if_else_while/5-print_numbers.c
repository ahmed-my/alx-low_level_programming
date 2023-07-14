#include <stdio.h>
/**
 * main - entry point
 *
 * program to print all single digit number
 * Return: Always 1 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' +  number);
	}
	putchar('\n');
	return (0);
}
