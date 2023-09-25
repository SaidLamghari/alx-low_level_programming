#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Start of function that deletes
 *		the head node of a listint_t linked list
 * @head: Pointer
 * Return: The head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *copy;


	if (*head == 0)
		return (0);


	n = (*head)->n;
	copy = *head;
	*head = (*head)->next;



	free(copy);

	return (n);
}

