#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10x on a line
 * Return: 0
 */

void print_alphabet_x10(void)

{
	int i;
	char a;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		_putchar('\n');
	}
}
