#include "main.h"
/**
 * _abs - prints the absolute value of a number
 *
 * @num: the number being printed
 *
 * Return: Always success
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
