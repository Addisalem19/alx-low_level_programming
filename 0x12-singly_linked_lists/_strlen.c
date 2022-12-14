#include <stdio.h>

/**
 * _strlen - this function returns the length of a string
 * @s: The string to return the length
 *
 * Return: Length of s
 */
int _strlen(const char *s)
{
	long int len = 0;

	while (s != NULL && s[len] != '\0')
		len++;

	return (len);
}
