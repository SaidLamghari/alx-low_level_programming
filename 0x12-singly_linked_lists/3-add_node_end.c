#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node_end - Start of function
 *			that adds a new node at the end of a list_t list.
 * @head: Pointer
 * @str: String
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *copy;
	size_t i;

	i = 0;
	copy = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i])
		i++;
	new->len = i;

	new->str = strdup(str);

	if (*head != NULL)
	{
		while (copy->next != NULL)
			copy =  copy->next;
		copy->next = new;
	}
	else
		*head = new;

	return (new);
}
