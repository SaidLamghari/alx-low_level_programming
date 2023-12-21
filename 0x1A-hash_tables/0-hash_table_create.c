#include "hash_tables.h"

/**
 * hash_table_create - Start of  function that creates a hash table.
 * @size: The size of array
 * Return: A pointer (copy) or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *copy;


	copy = malloc(sizeof(hash_table_t));
	if (copy == NULL)
	{
		return (NULL);
	}



	copy->array = malloc(sizeof(hash_node_t *) * size);
	if (copy->array == NULL)
	{
		free(copy);
		return (NULL);
	}


	count = 0;
	while (count < size)
	{
		copy->array[count] = NULL;
		count++;
	}

	copy->size = size;
	return (copy);
}
