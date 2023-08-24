#include "main.h"
/**
 * main - Your code starts here
 *
 * Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 122)
		{
			_putchar(i);
		}
		else
		{
			_putchar('\n');
		}
	}

	return (0);
}
