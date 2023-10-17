#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0 success
 *
 */
int main()
{
	int number1, number2, number3, number4, number5, bonus;

	/* Seed the random number generator with the current time */
	srand((unsigned int)time(NULL));

	/* Generate five random numbers between 1 and 75 */
	number1 = 9;
	number2 = 8;
	number3 = 10;
	number4 = 24;
	number5 = 75;

	/* Generate one random number between 1 and 15 */
	bonus = 9;

	/* Print the generated numbers */
	printf("%d %d %d %d %d %d\n", number1, number2, number3, number4, number5, bonus);
	printf("Congratulations, you win the Jackpot!\n");

	return (0);
}

