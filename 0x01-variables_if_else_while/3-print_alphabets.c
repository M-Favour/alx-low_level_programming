#include <stdio.h>

/**
 * main - Your code starts here
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (j = 65; j <= 90; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
