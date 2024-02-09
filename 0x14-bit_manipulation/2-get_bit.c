#include "main.h"

/**
 * get_bit - Returns value of bit at index
 * @n: number to check bits in
 * @index: where bit is checked
 * Return: val of bit, -1 where error encountered
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int abc, def;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	abc = 1 << index;
	def = n & abc;
	if (def == abc)
		return (1);
	return (0);
}
