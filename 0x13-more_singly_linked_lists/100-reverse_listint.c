#include "lists.h"
/**
 * *reverse_listint - Start of function that reverses a listint_t linked list.
 * @head: Pointer
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy, *inver;

	copy = *head;
	*head = NULL;

	while (copy != NULL)
	{
		inver = copy->next;
		copy->next = *head;
		*head = copy;
		copy = inver;
	}
	return (*head);
}
