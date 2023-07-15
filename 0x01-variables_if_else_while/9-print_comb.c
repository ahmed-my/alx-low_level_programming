#include <stdio.h>
/**
 * main - entry point program
 * To print all possible combination of single digit number
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
