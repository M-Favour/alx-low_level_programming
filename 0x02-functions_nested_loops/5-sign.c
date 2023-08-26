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
		return (1);
		_putchar('+');
	}
	else if (n < 1)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
