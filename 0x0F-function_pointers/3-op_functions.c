#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns sum of a and b
 * @a: ...
 * @b: ...
 * Return: ...
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference of a and b
 * @a: ...
 * @b: ...
 * Return: ...
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns product of a and b
 * @a: ...
 * @b: ...
 * Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns result of division of a by b
 * @a: ...
 * @b: ...
 * Return: ...
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Returns remainder of division of a by b
 * @a: ...
 * @b: ...
 * Return: ...
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

