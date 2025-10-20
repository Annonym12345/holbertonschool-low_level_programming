#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successs)
 */
int main(void)
{
	int n;
	int tast_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("le dernier chiffre de %d est %d", n, tast_digit);

	if (last_digit > 5)
	{
		printf("et est supprieur a 5\n")
	}
	else if (last_digit == 0)
	{
		printf("et est egal a 0\n")
	}
	else
	{
		printf("et est inferieur a 6 et different de 0\n");
	}

	return (0);
}
