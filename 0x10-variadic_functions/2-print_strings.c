#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: Separator printed between the strings
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		char *b = va_arg(arg, char *);

		if (b == NULL)
			printf("nil)");
		else
			printf("%s", b);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
