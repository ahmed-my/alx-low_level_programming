#include "main.h"
/**
 * print_last_digit - A program to print the last digit
 * @num: The number to be checked
 *
 * Return: Success 0
 */
int print_last_digit(int num)
{
	int lastDigit;

	if (num > 0)
	{
		lastDigit = num % 10;
	}
	else
	{
		lastDigit = (num % 10) * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
