#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Start of function that prints a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	int first;
	hash_node_t *node;
	unsigned long int i;

	first = 1;
	if (ht == NULL)
	{
		return;
	}
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (!first)
				{
					printf(", ");
				}

				printf("'%s': '%s'", node->key, node->value);
				first = 0;
				node = node->next;
			}
		}
		printf("}\n");
	}
}
