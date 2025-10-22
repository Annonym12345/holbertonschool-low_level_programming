#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;

        i = 0;
        for (i = 0; i <= 9; i++)
        {
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}
	putchar(10);
        return (0);
}
