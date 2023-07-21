#include "main.h"
/**
* print_diagonal - function to print diagonal line
* @n: The integer to check
*
* Return: 0
*/
void print_diagonal(int n)
{
int i;

for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
