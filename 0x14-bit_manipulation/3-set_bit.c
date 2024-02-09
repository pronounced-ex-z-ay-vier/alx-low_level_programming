#include "main.h"

/**
 * set_bit - sets vslue of bit to 1 at the index
 * @n: number to set
 * @index: index st which to set bit
 * Return: 1 for success, -1 for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int SB;

	if (index > (sizeof(unsigned long int) * 8 - 1))
			return (-1);
	SB = 1 << index;
	*n = *n | SB;
	return (1);
}
