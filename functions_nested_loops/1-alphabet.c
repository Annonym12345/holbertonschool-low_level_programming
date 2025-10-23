#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void
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
