#include "main.h"

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
                putchar(c);
                c++;
        }
        putchar(10);
}
