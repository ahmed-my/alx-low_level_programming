#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
		{
			putchar(number + '0');
		}
		else
		{
			putchar(number - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
