#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * dlistint_len - Start of function that returns the number
 *			of elements in a linked dlistint_t list.
 * @h: The pointer
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	for (; h != NULL; h = h->next)
	{

		count++;

	}


	return (count);
}
