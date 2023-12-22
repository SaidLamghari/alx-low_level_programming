#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Start of function that retrieves
 *			a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to search for.
 * Return: The value associated or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	else
	{
		/* Get the index of the key */
		indx = key_index((const unsigned char *)key, ht->size);

		/* Traverse the linked list at the index */
		node = ht->array[indx];
		while (node != NULL)
		{
			/* Compare the keys */
			if (strcmp(node->key, key) == 0)
			{
				return (node->value);
			}
			node = node->next;
		}
		/* Key not found */
		return (NULL);
	}
}
