#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in the hash table's array
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The calculated index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = (hash_djb2(key)) % size;

	return (index);
}
