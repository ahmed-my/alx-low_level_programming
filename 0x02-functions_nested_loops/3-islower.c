#include "main.h"
/**
 * _islower - checks for lower case
 * @c: The number to be checked
 *
 * Return: Success 0
 */
int _islower(int c) /* c is a character */
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
