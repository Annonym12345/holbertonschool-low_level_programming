#include "main.h"

/**
 * _strlen - Retourne la longueur d'une chaîne de caractères.
 * @s: La chaîne dont on veut connaître la longueur.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}
