#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add/update the element in
 * @key: The key of the element
 * @value: The value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *p;
	hash_node_t *new_node;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	p = ht->array[index];
	while (p != NULL)
	{
		if (strcmp(p->key, key) == 0)
		{
			free(p->value);
			p->value = strdup(value);
			return (1);
		}
		p = p->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
