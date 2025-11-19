# Git Intro Project

#include "variadic_functions.h"
#include <.....h>

/**
 ** sum_them_all - Returns the sum of all its paramters.
 ** @n: The number of paramters passed to the function.
 ** @...: A variable number of paramters to calculate the sum of.
 *
 ** Return: If n == 0 - 0.
 **         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
        va_list nums;
        unsigned int i,sum = 0;

        va_start(nums, n);

        for (i = 0; i < n; i++)
                sum += va_arg(nums, int);

        va_end(nums);

        return (sum);
}

#include "variadic_functions.h"
#include <.....h>
#include <.....h>

/**
 ** print_numbers - Prints numbers, followed by a new line.
 ** @separator: The string to be printed between numbers.
 ** @n: The number of integers passed to the function.
 ** @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

// #include "variadic_functions.h"
// #include <....h>
// #include <......h>

/**
 ** print_strings - Prints strings, followed by a new line.
 ** @separator: The string to be printed between strings.
 ** @n: The number of strings passed to the function.
 ** @...: A variable number of strings to be printed.
 *
 ** Description: If separator is NULL, it is not printed.
 **              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

