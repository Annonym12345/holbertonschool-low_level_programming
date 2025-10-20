#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Point d'entrée du programme
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
	int chiffre_final;

	srand(time(0));
	n = rand();
	chiffre_final = n % 10;

	printf("Le dernier chiffre de %d est %d", n, chiffre_final);

	if (chiffre_final > 5)
	{
		printf("est supérieur à 5\n");
	}
	else if (chiffre_final == 0)
	{
		printf("et est égal à 0\n");
	}
	else
	{
		printf("est inférieur à 6 et différent de 0\n");
	}

	return (0);
}
