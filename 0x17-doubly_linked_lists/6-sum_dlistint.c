#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 *		the data (n) of a dlistint_t linked list.
 * @head: The pointer
 * Return: s
 */

int sum_dlistint(dlistint_t *head)
{
	int s;


	dlistint_t *cur_node = head;

	s = 0;

	while (cur_node != NULL)
	{

		s = s +  cur_node->n;

		cur_node = cur_node->next;
	}

	return (s);
}
