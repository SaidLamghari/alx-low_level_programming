#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Start function that deletes the node
 * @head: The pointer
 * @index: The index of the node that should be deleted.
 * Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur_node = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur_node);
		return (1);
	}
	while (count < index)
	{
		cur_node = cur_node->next;
		if (cur_node == NULL)
			return (-1);
		count++;
	}
	if (cur_node->prev != NULL)
		cur_node->prev->next = cur_node->next;
	if (cur_node->next != NULL)
		cur_node->next->prev = cur_node->prev;
	free(cur_node);
	return (1);
}
