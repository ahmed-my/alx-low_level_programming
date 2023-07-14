#include <stdio.h>
/**
 * main - entry point program
 * To print all possible combination of single digit number
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
