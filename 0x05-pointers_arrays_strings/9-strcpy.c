#include "main.h"

/**
 * _strcpy - Function that copies a string
 * @dest: The destination
 * @src: source of string
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
