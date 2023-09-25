#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint_end - Start of function that adds
 *			a new node at the end of a listint_t list.
 * @head : Pointer
 * @n: New node
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *copy;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		copy = *head;
		while (copy->next != NULL)
			copy = copy->next;
		copy->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
