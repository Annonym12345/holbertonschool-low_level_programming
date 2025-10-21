#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 48;
	while (c >= '0' && c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
