#include "main.h"

/**
 * _islower - A function checking if the given character is lower case
 * @c: Parameter checked
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
