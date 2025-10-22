#include "main.h"
#include <unistd.h>

/**
 * _putchar  - afficher caractere c
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
