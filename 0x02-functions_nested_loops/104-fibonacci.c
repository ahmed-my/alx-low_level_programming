#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fibo1 = 0, fibo2 = 1;
	unsigned long sum, fibo1_h1, fibo1_h2;
	unsigned long fibo2_h1, fibo2_h2, h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);
		fibo1 = fibo2;
		fibo2 = sum;
	}
	fibo1_h1 = fibo1 / 10000000000;
	fibo2_h1 = fibo2 / 10000000000;
	fibo1_h2 = fibo1 % 10000000000;
	fibo2_h2 = fibo2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		h1 = fibo1_h1 + fibo2_h1;
		h2 = fibo1_h2 + fibo2_h2;
		if (fibo1_h2 + fibo2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(",");
		fibo1_h1 = fibo2_h1;
		fibo1_h2 = fibo2_h2;
		fibo2_h1 = h1;
		fibo2_h2 = h2;
	}
	printf("\n");
	return (0);
}

