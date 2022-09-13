#include "main.h"

/**
 * main - print alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int alpha = 97;
	int max = 97 + 26;

	while (alpha < max)
	{
		_putchar(alpha++);
	}
	_putchar('\n');
}
