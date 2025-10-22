#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	c = 97;
	while (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
