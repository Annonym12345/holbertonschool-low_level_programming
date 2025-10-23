# Git Intro Project

faire un fichier .h avec la fonction.
et du coup mettre #include <..nom...h>
et git add ect...

// #include "main.h"

/**
 ** _isalpha - Checks if a character is alphabetic.
 ** @c: The character to be checked.
 *
 ** Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z'))
                return (1);
        else
                return (0);
}
