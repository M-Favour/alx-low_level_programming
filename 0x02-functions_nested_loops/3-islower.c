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
	int n = 0;

	if (c >= 65 && c <= 90)
	{
		_putchar(48 + n);
	}
	else
	{
		_putchar(49 + n);
	}

	return (c);
}
