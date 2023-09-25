#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_nodeint - Start of function that adds a new node
 *			at the beginning of a listint_t list.
 * @head: Pointer
 * @n: Numbre
 * Return: new node at the beginning
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);


	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
