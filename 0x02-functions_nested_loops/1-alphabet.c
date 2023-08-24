#include "main.h"
/**
 * main - Your code starts here
 *
 * Return: Always zero
 */

/*function declaration and definition*/
int print_alphabet()
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
}

int main(void)
{
	print_alphabet();
	return (0);
}
