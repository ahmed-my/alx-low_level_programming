#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 0 success
 *
 */
int main(void)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	return (0);
}
