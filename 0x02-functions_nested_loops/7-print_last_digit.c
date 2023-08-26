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

	_putchar(b);

	return (b);
}
