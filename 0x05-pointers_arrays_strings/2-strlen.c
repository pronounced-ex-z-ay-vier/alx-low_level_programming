#include "main.h"

/**
 * _strlen - Function to return lenght of string
 * @s: string counted
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
