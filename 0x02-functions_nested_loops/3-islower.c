#include "main.h"
#include <stdio.h>
/**
 * _islower - Checks if a character is in upper or lowercase
 *
 * Return: Always zero
 */

int _islower(void)
{
	int c = 65;

	if (c <= 90)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
