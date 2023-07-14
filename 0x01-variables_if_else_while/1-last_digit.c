#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Enty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int d = n % 10; /* d denotes lastdigi */

	if (d > 5)
	{
		printf("Last digit of %lu is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %lu is %d and is 0\n", n, d);
	}
	else
	{
		printf("Last digit of %lu is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
