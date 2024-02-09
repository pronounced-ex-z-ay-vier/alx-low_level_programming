#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: pointer to string of binary
 * Return: Unsigned int of dec, 0 where error occur
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val;

	val = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		val <<= 1;
		if (b[i] == '1')
			val = val + 1;
	}
	return (val);
}
