#include <stdio.h>
/**
 * main - Your code starts here
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	int i = 0;

	if (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	else
		putchar('\n');

	return (0);
}
