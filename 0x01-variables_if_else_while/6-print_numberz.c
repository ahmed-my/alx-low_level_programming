#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		purchar(num);
		purchar('\n');
	}
	return (0);
}
