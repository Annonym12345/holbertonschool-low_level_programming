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


// #include "hash_tables.h"

/**
 ** key_index - Get the index at which a key/value pair should
 **             be stored in array of a hash table.
 ** @key: The key to get the index of.
 ** @size: The size of the array of the hash table.
 *
 ** Return: The index of the key.
 *
 ** Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}


#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        hash_node_t *new;
        char *value_copy;
        unsigned long int j, i;

        if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
                return (0);

        value_copy = strdup(value);
        if (value_copy == NULL)
                return (0);

        j = key_index((const unsigned char *)key, ht->size);
        for (i = j; ht->array[i]; i++)
        {
                if (strcmp(ht->array[i]->key, key) == 0)
                {
                        free(ht->array[i]->value);
                        ht->array[i]->value = value_copy;
                        return (1);
                }
        }

        new = malloc(sizeof(hash_node_t));
        if (new == NULL)
        {
                free(value_copy);
                return (0);
        }
        new->key = strdup(key);
        if (new->key == NULL)
        {
                free(new);
                return (0);
        }
        new->value = value_copy;
        new->next = ht->array[j];
        ht->array[j] = new;

        return (1);
}
