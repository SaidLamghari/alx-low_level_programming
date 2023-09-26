#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Start of function that deletes
 *				the node at index index of a listint_t linked list.
 * @head: Pointer
 * @index: Index of node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *copy;

	copy = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	i = 0;
	while (copy != NULL)
	{
		if (i == index)
		{
			prev->next = copy->next;
			free(copy);
			return (1);
		}
		i++;
		prev = copy;
		copy = copy->next;
	}


	return (-1);
}
