#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	char c;

	a = 48;
	c = 97;
	while (a >= '0' && a <= '9')
	{
		putchar(a);
		a++;
	}
	while (c >= 'a' && c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
