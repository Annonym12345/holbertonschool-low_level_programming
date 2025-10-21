# Git Intro Project

// #include <....h>

/**
 ** main - Entry point
 *
 ** Return: Always 0 (Success)
 */
int main(void)
{
        char a;

        a = 97;
        while (a >= 'a' && a <= 'z')
        {
                if (a != 'q' && a != 'e')
                {
                        putchar(a);
                }
                a++;
        }
        putchar(10);
        return (0);
}
