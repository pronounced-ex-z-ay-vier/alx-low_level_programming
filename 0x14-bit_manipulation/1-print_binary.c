#include "main.h"

/**
 * _pow - calculates base to power
 * @base: base of exponent number
 * @power: power of exponent number
 * Return: value of base raised to power
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int val;
	unsigned int i;

	val = 1;
	for (i = 1; i <= power; i++)
		val = val * base;
	return (val);
}

/**
 * print_binary - prints number in the binary form
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int abc, def;
	char flag;

	flag = 0;
	abc = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (abc != 0)
	{
		def = n & abc;
		if (def == abc)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || abc == 1)
		{
			_putchar('0');
		}
		abc >>= 1;
	}
}
