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
		printf("%d\n", number);
	}
	return (0);
}
