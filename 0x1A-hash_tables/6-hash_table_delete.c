#include "hash_tables.h"

/**
 * hash_table_delete - Start of function that deletes a hash table.
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{

	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
	{
		return;
	}
	else
	{
		/* Free each node */
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}

		/* Free the hash table and the array */
		free(ht->array);
		free(ht);
	}


}
