#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0 success
 *
 */
int main(void)
{
	srand(time(NULL));

	int i, number;

	printf("Your six numbers are:\n");

	/* Generate five numbers from 1 to 75 */
	for (i = 1; i <= 5; i++)
	{
		number = rand() % 75 + 1;
		printf("%d ", number);
	}

	/* Generate one number from 1 to 15 */
	number = rand() % 15 + 1;
	printf("+ %d\n", number);

	return (0);
}

