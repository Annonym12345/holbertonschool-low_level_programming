# Git Intro Project

//#include "main.h"

/**
 ** _atoi - Converts a string to an integer.
 ** @s: The string to be converted.
 *
 ** Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
        int     nb;
        int     space;

        space = 1;
        nb = 0;
        while (*s == ' ' || (*s >= 9 && *s <= 13))
        {
                s++;
        }
        while (*s == '-' || *s == '+')
        {
                if (*s == '-')
                        space = -space;
                s++;
        }
        while (*s != '\0' && *s >= '0' && *s <= '9')
        {

                nb = nb * 10 + (*s - '0');
                s++;
        }
        return ((nb) * space);
}
