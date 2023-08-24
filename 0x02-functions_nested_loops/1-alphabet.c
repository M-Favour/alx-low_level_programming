#include "main.h"
/**
 * print_alphabet - Prints a-z
 *
 * Return: Always zero
 */

/*function declaration and definition*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 123; i++)
	{
		if (i != 123)
		{
			_putchar(i);
		}
		else
		{
			_putchar('\n');
		}
	}
}
