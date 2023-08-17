#include "main.h"

/**
 * print_last_digit - Prints last digit
 * Return: k
 * @i: Function parameter
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + 0);
	return (k);
}
