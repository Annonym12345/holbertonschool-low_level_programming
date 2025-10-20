# Git Intro Project

  Description : Ce code génère un nombre aléatoire,
  calcule son dernier chiffre, et imprime une phrase
  qui vas avec le chiffre.

// #include <.....h>
// #include <.....h>
// #include <....h>

/**
 ** main - Point d'entrée du programme
 *
 ** Retourne : Toujours 0 (succès)
 */
int main(void)
{
    int n;
    int dernier_chiffre;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    dernier_chiffre = n % 10;

    printf("Dernier chiffre de %d est %d ", n, dernier_chiffre);

    if (dernier_chiffre > 5)
    {
        printf("et est supérieur à 5\n");
    }
    else if (dernier_chiffre == 0)
    {
        printf("et est égal à 0\n");
    }
    else
    {
        printf("et est inférieur à 6 et différent de 0\n");
    }

    return 0;
}
