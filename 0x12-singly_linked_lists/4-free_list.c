#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Start of function that frees a list_t list.
 * @head: Pointer
 */
void free_list(list_t *head)
{
	list_t *copy;

	copy = head;
	while (head)
	{
		head = head->next;
		free(copy->str);
		free(copy);
		copy = head;
	}
}
