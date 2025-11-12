# Git Intro Project

// #include "main.h"
// #include <.....h>

/**
 ** malloc_checked - Allocates memory using malloc.
 ** @b: The number of bytes to be allocated.
 *
 ** Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

// #include "main.h"
// #include <.....h>

/**
 ** string_nconcat - Concatenates two strings using at
 **                  most an inputted number of bytes.
 ** @s1: The first string.
 ** @s2: The second string.
 ** @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 ** Return: If the function fails - NULL.
 **         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *concat;
        unsigned int len = n, index;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (index = 0; s1[index]; index++)
                len++;

        concat = malloc(sizeof(char) * (len + 1));

        if (concat == NULL)
                return (NULL);

        len = 0;

        for (index = 0; s1[index]; index++)
                concat[len++] = s1[index];

        for (index = 0; s2[index] && index < n; index++)
                concat[len++] = s2[index];

        concat[len] = '\0';

        return (concat);
}

// #include "main.h"
// #include <.....h>

/**
 ** _calloc - Allocates memory for an array of a certain number
 **           of elements each of an inputted byte size.
 ** @nmemb: The number of elements.
 ** @size: The byte size of each array element.
 *
 ** Return: If nmemb = 0, size = 0, or the function fails - NULL.
 **         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        void *m;
        char *f;
        unsigned int i;

        if (nmemb == 0 || size == 0)
                return (NULL);

        m = malloc(size * nmemb);

        if (m == NULL)
                return (NULL);

        f = m;

        for (i = 0; i < (size * nmemb); i++)
                f[i] = '\0';

        return (m);
}

// #include "main.h"
// #include <.....h>

/**
 ** array_range - Creates an array of integers ordered
 **               from min to max, inclusive.
 ** @min: The first value of the array.
 ** @max: The last value of the array.
 *
 ** Return: If min > max or the function fails - NULL.
 **         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *a, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min++;

	return (a);
}
