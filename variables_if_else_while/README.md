# Git Intro Project

// #include <.......h>
// #include <......h>
// #include <.....h>

/**
  main - Entry point
 *
  Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND-MAX / 2;

        if (n > 0)
        {
                printf(%d, "is positive\n", n);
        }
        else if (n < 0)
        {
                printf(%d, "is negative\n", n);
        }
        else
                printf(%d, "is zero\n", n);

        return (0);
}
