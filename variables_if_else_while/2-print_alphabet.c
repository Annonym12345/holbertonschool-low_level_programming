#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 97;
	while(c >= 'a' && c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
