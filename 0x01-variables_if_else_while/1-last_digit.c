#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Your code goes here
 *
 * Return: Always zero
 */

int main(void)
{
	int n;
	int l = abs(n) % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n" n, l);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n"n, l);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n"n, l);

	return (0);
}