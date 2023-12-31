#include "main.h"
/**
 * print_sign - Checks for the sign of a number
 *
 * @n: the number to be printed
 *
 * Return: 1 if n is greater than 0, 0 if n is 0 and -1 if n is less than 0
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
