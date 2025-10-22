#include <main.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: on 1 success
 */
int main(void)
{
	return (write(1, &c, 1));
}
