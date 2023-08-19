#include "main.h"

/**
 * print_line - Function that prints straight line on the terminal
 * @n: number of times character '_' would be printed.
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i
			;
		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
