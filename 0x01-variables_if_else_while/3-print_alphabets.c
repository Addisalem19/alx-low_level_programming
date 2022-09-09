#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 'a';
	int u = 'A';
	int totalL = l + 26;
	int totalU = u + 26;

	while (l < totalL)
		putchar(l++);

	while (u < totalU)
		putchar(u++);

	putchar('\n');
	return (0);
}
