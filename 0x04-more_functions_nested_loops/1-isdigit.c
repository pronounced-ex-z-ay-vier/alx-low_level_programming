#include "main.h"

/**
 * _isdigit - function which checks for 0 through 9
 * @c: parameter to be checked
 * Return: 1 for success and 0 for failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
