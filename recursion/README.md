# Git Intro Project

// #include "main.h"

/**
 ** _puts_recursion - Prints a string, followed by a new line.
 ** @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
        if (*s)
        {
                _putchar(*s);
                _puts_recursion(s + 1);
        }

        else
                _putchar(10);
}

// #include "main.h"

/**
 ** _print_rev_recursion - Prints a string in reverse.
 ** @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
        if (*s)
        {
                _print_rev_recursion(s + 1);
                _putchar(*s);
        }
}
// #include "main.h"

/**
 ** _strlen_recursion - Returns the length of a string.
 ** @s: The string to be measured.
 *
 ** Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
        int len = 0;

        if (*s)
        {
                len++;
                len += _strlen_recursion(s + 1);
        }

        return (len);
}
// #include "main.h"

/**
 ** factorial - Returns the factorial of a given number.
 ** @n: The number to find the factorial of.
 *
 ** Return: If n > 0 - the factorial of n.
 **         If n < 0 - 1 to indicate an error.
 */
int factorial(int n)
{
        int result = n;

        if (n < 0)
                return (-1);

        else if (n >= 0 && n <= 1)
                return (1);

        result *= factorial(n - 1);

        return (result);
}
// #include "main.h"

/**
 ** _pow_recursion - Returns the value of x raised to the power of y.
 ** @x: The number to be raised.
 ** @y: The power.
 *
 ** Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
        int result = x;

        if (y < 0)
                return (-1);

        else if (y == 0)
                return (1);

        result *= _pow_recursion(x, y - 1);

        return (result);
}
// #include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 ** find_sqrt - Finds the natural square root of an inputted number.
 ** @num: The number to find the square root of.
 ** @root: The root to be tested.
 *
 ** Return: If the number has a natural square root - the square root.
 **         If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
        if ((root * root) == num)
                return (root);

        if (root == num / 2)
                return (-1);

        return (find_sqrt(num, root + 1));
}

/**
 ** _sqrt_recursion - Returns the natural square root of a number.
 ** @n: The number to return the square root of.
 *
 ** Return: If n has a natural square root - the natural square root of n.
 **         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
        int root = 0;

        if (n < 0)
                return (-1);

        if (n == 1)
                return (1);

        return (find_sqrt(n, root));
}
// #include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 ** is_divisible - Checks if a number is divisible.
 ** @num: The number to be checked.
 ** @div: The divisor.
 *
 ** Return: If the number is divisible - 0.
 **         If the number is not divisible - 1.
 */
int is_divisible(int num, int div)
{
        if (num % div == 0)
                return (0);

        if (div == num / 2)
                return (1);

        return (is_divisible(num, div + 1));
}

/**
 ** is_prime_number - Checks if a number is prime.
 ** @n: The number to be checked.
 *
 ** Return: If the integer is not prime - 0.
 **         If the number is prime - 1.
 */
int is_prime_number(int n)
{
        int div = 2;

        if (n <= 1)
                return (0);

        if (n >= 2 && n <= 3)
                return (1);

        return (is_divisible(n, div));
}

