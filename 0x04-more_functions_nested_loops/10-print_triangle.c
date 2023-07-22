#include "main.h"
/**
  * print_triangle - print function
  * @size: The integer to check
  *
  * Return: 0
  */
void print_triangle(int size)
{
	int row, space, hashe;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hashe = 1; hashe <= row; hashe++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
