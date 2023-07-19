#include "main.h"
/**
 * _isalpha - A program to determine alphabet
 * @c: The number to be checked
 *
 * Return: Success 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
