#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fibo1 = 0;
	unsigned long fibo2 = 1;
	unsigned long sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);
		fibo1 = fibo2;
		fibo2 = sum;
		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
			printf(" ");
		}
	}
	return (0);
}
