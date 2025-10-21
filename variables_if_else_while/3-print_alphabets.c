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

	a = 97;
	c = 65;
	while (a >= 'a' && a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (c >= 'A' && c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
