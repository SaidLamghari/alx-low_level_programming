#include "lists.h"
#include <stdlib.h>
/**
 * *insert_nodeint_at_index - Start of function
 *			that inserts a new node at a given position.
 * @head: Pointer
 * @idx: The index
 * @n: Int
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *copy;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	copy = *head;
	i = 0;
	while (copy != NULL)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = copy->next;
			copy->next = new;
			return (new);
		}

		i++;
		copy = copy->next;
	}

	free(new);
	return (NULL);
}
