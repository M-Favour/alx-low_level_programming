#include "main.h"
/**
 * print_alphabet_x10 - Prints a-z ten times
 *
 * Return:returns void
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 'abcdefghijklmnopqrstuvwxyz';

	for (i = 1; i <= 10; i++)
	{
		_putchar(j);
		_putchar('\n');
	}
}
