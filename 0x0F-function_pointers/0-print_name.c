#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This prints a name
 * @name: The name to print
 * @f: The function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
