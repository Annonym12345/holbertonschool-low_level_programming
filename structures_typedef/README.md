# Git Intro Project

// #include "dog.h"
// #include <.....h>

/**
 ** init_dog - Initializes a variable of type struct dog.
 ** @d: The dog to be initialized.
 ** @name: The name of the dog.
 ** @age: The age of the dog.
 ** @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d != NULL)
        {
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
}

// #include "dog.h"
// #include <stdio.h>
// #include <stdlib.h>

/**
 ** print_dog - Prints a struct dog.
 ** @d: The struct dog to be printed.
 */
void print_dog(struct dog *d)
{
        if (d == NULL)
                return;

        if (d->name == NULL)
                printf("Name: (nil)\n");
        else
                printf("Name: %s\n", d->name);

        if (d->age < 0)
                printf("Age: (nil)\n");
        else
                printf("Age: %f\n", d->age);

        if (d->owner == NULL)
                printf("Owner: (nil)\n");
        else
                printf("Owner: %s\n", d->owner);
}

// #include "dog.h"
// #include <.....h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 ** _strlen - Finds the length of a string.
 ** @str: The string to be measured.
 *
 ** Return: The length of the string.
 */
int _strlen(char *str)
{
        int len = 0;

        while (*str++)
                len++;

        return (len);
}

/**
 ** _strcopy - Copies a string pointed to by src, including the
 **            terminating null byte, to a buffer pointed to by dest.
 ** @dest: The buffer storing the string copy.
 ** @src: The source string.
 *
 ** Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
        int i;

        i = 0;
        for (i = 0; src[i]; i++)
                dest[i] = src[i];

        dest[i] = '\0';

        return (dest);
}

/**
 ** new_dog - Creates a new dog.
 ** @name: The name of the dog.
 ** @age: The age of the dog.
 ** @owner: The owner of the dog.
 *
 ** Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *dog;

        if (name == NULL || age < 0 || owner == NULL)
                return (NULL);

        dog = malloc(sizeof(dog_t));
        if (dog == NULL)
                return (NULL);

        dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
        if (dog->name == NULL)
        {
                free(dog);
                return (NULL);
        }

        dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
        if (dog->owner == NULL)
        {
                free(dog->name);
                free(dog);
                return (NULL);
        }

        dog->name = _strcopy(dog->name, name);
        dog->age = age;
        dog->owner = _strcopy(dog->owner, owner);

        return (dog);
}

// #include "dog.h"
// #include <stdlib.h>

/**
 ** free_dog - Frees dogs.
 ** @d: The dog to be freed.
 */
void free_dog(dog_t *d)
{
        if (d == NULL)
                return;

        free(d->owner);
        free(d->name);
        free(d);
}
