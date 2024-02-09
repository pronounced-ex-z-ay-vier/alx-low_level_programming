#include "main.h"

/**
 * clear_bit - Sets value of bit to 0 at index
 * @n: Parameter
 * @index: index
 * Return: 1 for success, -1 for fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
