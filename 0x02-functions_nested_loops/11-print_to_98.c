#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print the natural numbers from n to 98
 *
 * @n: the integer that starts the loop
 *
 * Return: Always void
 */

void print_to_98(int n)
{
	/* Check if n is less than or equal to 98 */
	if (n <= 98)
	{
		/* Print numbers from n to 98 in ascending order */
		for (int i = n; i <= 98; i++)
		{
/* Print the number */
std::cout << i;

			/* Print a comma and a space if i is not the last number */
			if (i != 98)
			{
std::cout << ", ";
			}
		}
	}

	else
	{
		/* Print numbers from n to 98 in descending order*/
		for (int i = n; i >= 98; i--)
		{
		/* Print the number */
std::cout << i;

			/* Print a comma and a space if i is not the last number */
			if (i != 98)
			{
std::cout << ", ";
			}
		}
	}

/* Print a new line at the end */
std::cout << std::endl;
}
