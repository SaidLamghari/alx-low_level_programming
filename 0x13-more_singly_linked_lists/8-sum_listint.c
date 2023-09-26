#include "lists.h"
/**
 * sum_listint - Start of function that returns
 *		the sum of all the data (n) of a listint_t linked list.
 * @head: Pointer
 * Return: The sum or 0.
 */
int sum_listint(listint_t *head)
{
	int s;

	s = 0;
	while (head != NULL)
	{
		s = s + head->n;
		head = head->next;
	}

	return (s);
}
