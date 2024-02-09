#include "main.h"

/**
 * flip_bits - counts bits to flip to get one number from another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, CB = 0;
	unsigned long int First;
	unsigned long int later = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		First = later >> i;
		if (First & 1)
			CB++;
	}
	return (CB);
}
