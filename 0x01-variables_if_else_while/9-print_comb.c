#include <stdio.h>
/**
 * main - Your code starts here
 *
 * Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}	
