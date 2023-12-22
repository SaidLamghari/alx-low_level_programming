#include "hash_tables.h"

/**
 * hash_table_create - Start of  function that creates a hash table.
 * @size: The size of array
 * Return: A pointer (copy) or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *ht;


	/* Allocate memory */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return NULL;
	}
	/* Allocate memory */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return NULL;
	}
	/* Initialize a element of the array to NULL */
	count = 0;
	while (count < size)
	{
		ht->array[count] = NULL;
		count++;
	}
	ht->size = size;
	return (ht);
}
