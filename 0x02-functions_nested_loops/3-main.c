#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: Success 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');

	r = _islower('e');
	_putchar(r + '0');

	r = _islower(108);
	_putchar(r + '0');
	return (0);
}
