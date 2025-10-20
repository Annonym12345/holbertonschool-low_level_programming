#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - Point d'entrée
 *
 * Description : Ce code génère un nombre aléatoire,
 * calcule son dernier chiffre, et imprime une phrase
 * qui vas avec le chiffre.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int n;
	int last_digit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = abs(n) % 10;
	
	printf("Le dernier chiffre de %d est %d", n, last_digit);
	if (last_digit > 5)
	{
		printf(" et est supérieur à 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" et est égal à 0\n");
	}
	else
	{
		printf(" et est inférieur à 6 et différent de 0\n");
	}
	return (0);
}
