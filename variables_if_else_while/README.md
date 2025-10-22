# Git Intro Project

//#include <stdio.h>

/**
 ** main - Entry point
 *
 ** Return: Always 0 (Success)
 */
int main(void)
{
        char c;

        c = 122;
        while (c <= 'z' && c >= 'a')
        {
                putchar(c);
                c--;
        }
        putchar(10);
        return (0);
}
