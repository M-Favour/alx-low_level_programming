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
	for (j = 65; j <= 70; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
