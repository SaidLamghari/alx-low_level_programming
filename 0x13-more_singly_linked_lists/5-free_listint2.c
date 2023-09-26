#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Start of  function that frees a listint_t list
 * @head: Pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *copy1, *copy2;

	if (head == NULL)
		return;

	copy1 = *head;

	while (copy1 != NULL)
	{


		copy2 = copy1;
		copy1 = copy1->next;
		free(copy2);

	}
	*head = NULL;
}
