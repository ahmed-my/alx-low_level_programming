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
	int i, number;
	int n1 = 9, n2 = 8, n3 = 10, n4 = 24, n5 = 75, bonus = 9;
	/* Seed the random number generator */
	srand(time(NULL));

	/* Generate five numbers from 1 to 75 */
	for (i = 1; i <= 5; i++)
	{
		number = rand() % 75 + 1;
		printf("%d ", number);
	}

	/* Generate one number from 1 to 15 */
	number = rand() % 15 + 1;
	printf(" %d\n", number);

	/* Check if the generated numbers match the specific values */
	if (n1 == number && n2 == number && n3 == number && n4 == number
			&& n5 == number && bonus == number) {
		printf("--> Please make me win!\n");
	}

	return (0);
}


