#include "lists.h"

/**
 * get_dnodeint_at_index - Start of  function that returns
 *				the nth node of a dlistint_t linked list.
 * @head: The pointer
 * @index: The index of the node, starting from 0
 * Return: current or  NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current_node = head;
	
	count = 0;
	
	while (current_node != NULL)
	{
		if (count == index)
		{
			return (current_node);
		}

		count++;

		current_node = current_node->next;
	}

	return (NULL);
}
