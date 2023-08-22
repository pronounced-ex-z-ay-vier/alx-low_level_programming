#include "main.h"

/**
 * _puts - Function that prints a string
 * @str: String printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
