#include "main.h"

/**
 * _abs - A function to find absolute valueof numbers
 * Return: -a or a
 * @a: Function parameter
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
