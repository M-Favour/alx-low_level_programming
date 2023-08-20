#include <stdio.h>
/**
 * main - Your code goes here
 *
 * Return: Always zero
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
