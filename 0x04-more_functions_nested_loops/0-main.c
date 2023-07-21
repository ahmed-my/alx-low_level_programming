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

        r = _isupper('H');
        _putchar(r + '0');

        r = _isupper('e');
        _putchar(r + '0');

        r = _isupper(108);
        _putchar(r + '0');
        return (0);
}
