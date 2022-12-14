#include "main.h"

/**
 * _strlen - This function returns the length of a string
 * @s: The string to return the length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	long int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
