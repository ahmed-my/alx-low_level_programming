#include "main.h"
/**
  * print_square - Function to print a square
  *@size: the integer to check
  *
  *Return: 0
  */
void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
