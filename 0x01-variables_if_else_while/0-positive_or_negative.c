#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Your code starts here
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		putchar(n + 'is positive');
	else if (n < 0)
		putchar(n + 'is negative');
	else
		putchar(n + 'is zero');

	return (0);
}
