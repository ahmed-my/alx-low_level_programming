#include "main.h"
/**
 * _islower - checks for lower case
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
