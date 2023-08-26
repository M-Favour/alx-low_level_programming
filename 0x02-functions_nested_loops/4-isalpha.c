#include "main.h"
/**
 * _isalpha - Checks for the letters of the alphabet
 *
 * @c: the string to be printed
 *
 * Return: 1 if an alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
