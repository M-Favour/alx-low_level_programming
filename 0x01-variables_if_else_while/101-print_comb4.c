#include <stdio.h>
/**
 * main - Your code starts here
 *
 * Return: Always zero
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
				else if (i == j || j == k || i == k)
				{
					continue;
				}
				else
				{
					putchar('\n');
				}
			}
		}
	}

	return (0);
}
