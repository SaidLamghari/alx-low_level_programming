#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node - Start of function that
 *		adds a new node at the beginning of a list_t list.
 * @head: Pointer
 * @str: String
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	i = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i])
		i++;
	new->len = i;

	new->str = strdup(str);

	new->next = *head;
	*head = new;

	return (new);
}
