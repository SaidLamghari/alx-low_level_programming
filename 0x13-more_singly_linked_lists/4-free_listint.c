#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Start of function that frees a listint_t list.
 * @head: Pointer
 */
void free_listint(listint_t *head)
{
	listint_t *copy;


	copy = head;

	while (head != NULL)
	{
		head = head->next;
		free(copy);
		copy = head;
	}
}
