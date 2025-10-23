# Git Intro Project

faire un fichier .h avec la fonction.
et du coup mettre #include <..nom...h>
et git add ect...

// #include "main.h"

/**
 ** main - check the code
 **
 ** Return: Always 0.
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
        putchar('\n');
}
