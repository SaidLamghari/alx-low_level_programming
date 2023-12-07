#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - Start of function that adds a new node
 *			at the end of a dlistint_t list.
 * @head: The pointer
 * @n: new number
 * Return: New node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;


	if (new_node == NULL)
		return (NULL);

	temp = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
