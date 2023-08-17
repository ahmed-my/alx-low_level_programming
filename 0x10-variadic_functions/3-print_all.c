#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list_of_arg;

	va_start(list_of_arg, format);
	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(list_of_arg, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(list_of_arg, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(list_of_arg, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(list_of_arg, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
		}
		i++;
		sep = ", ";
	}
	printf("\n");
	va_end(list_of_arg);
}
