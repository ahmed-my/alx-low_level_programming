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

	for (number = 48; number < 58; number++)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
