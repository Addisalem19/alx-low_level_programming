#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: The first number to be swapped
 * @b: The second number to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
