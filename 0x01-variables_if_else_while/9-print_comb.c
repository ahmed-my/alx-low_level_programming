#include <stdio.h>
/**
 * main - entry point program
 * To print all possible combination of single digit number
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
