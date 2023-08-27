#include "main.h"
/**
 * print_last_digit - Prints the last digit of the given number
 *
 * @a: the given number
 *
 * Return: Always success
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		b *= -1;
	}

	_putchar(b + '0');

	return (b);
}
