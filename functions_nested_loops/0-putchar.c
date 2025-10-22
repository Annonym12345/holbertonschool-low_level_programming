#include <.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: on 1 success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
