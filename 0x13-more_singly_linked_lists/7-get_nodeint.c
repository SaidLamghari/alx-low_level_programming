#include "lists.h"
#include <stdio.h>
/**
 * *get_nodeint_at_index - Start of function that returns
 *			the nth node of a listint_t linked list.
 * @head: Pointer
 * @index: Int
 * Return: The nth node or Null.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *copy;
	unsigned int i;

	i = 0;
	copy = head;
	while (copy && i < index)
	{
		copy = copy->next;
		i++;
	}
	return (copy);
}
