#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: The pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;


	for (current = head; current != NULL; current = head)
	{
		head = head->next;

		free(current);
	}
}
