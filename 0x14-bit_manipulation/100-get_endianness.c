#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian, 1 for small endian
 */

int get_endianness(void)
{
	int i;
	char *a;

	i = 1;
	a = (char *)&i;
	return (*a);
}
