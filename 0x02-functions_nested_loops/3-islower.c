#include "main.h"
#include <stdio.h>
/**
 * _islower - Checks if a character is in upper or lowercase
 *
 * @c: the character to be checked
 *
 * Return: Always zero
 */

int _islower(int c)
{

	if (c >= 65 && c <= 90)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}

	return (0);
}
