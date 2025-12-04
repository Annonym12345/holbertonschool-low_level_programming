# Git Intro Project

// #include "hash_tables.h"

/**
 ** hash_table_create - Creates a hash table.
 ** @size: The size of the array.
 *
 ** Return: If an error occurs - NULL.
 **         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		h->array[i] = NULL;

	return (h);
}


// #include "hash_tables.h"

/**
 ** hash_djb2 - Hash function implementing the djb2 algorithm.
 ** @str: The string to hash.
 *
 ** Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
        unsigned long int h;
        int c;

        h = 5381;
        while ((c = *str++))
                h = ((h << 5) + h) + c;

        return (h);
}
