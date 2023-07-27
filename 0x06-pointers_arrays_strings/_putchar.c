#include "main.h"
#include <unistd.h>

/**
 * _putchar: prints a char
 *@c: The integer to check
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
