# Git Intro Project

faire un fichier .h avec la fonction.
et du coup mettre #include <..nom...h>
et git add ect...

// #include "main.h"

/**
 ** print_sign - Prints the sign of a number.
 *
 ** Return: 1 if the numero
 */
int print_sign(int n)
{
        if (n > 0)
        {
                _putchar('+');
                return (1);
        }
        else if (n == 0)
        {
                _putchar('0');
                return (0);
        }
        else
        {
                _putchar('-');
                return (-1);
        }
}
