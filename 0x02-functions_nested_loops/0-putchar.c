#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * main - Your code starts here
 *
 * Return: Always zero
 */

int main(void)
{
	const char*message = "_putchar";

	size_t len = strlen(message);
	write(1, message, len);

	return (0);
}
