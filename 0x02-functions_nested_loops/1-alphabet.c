#include "main.h"
/**
 * main - print alphabet in lower case
 *
 * Return: Success 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
