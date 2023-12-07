#include "lists.h"
/**
 * insert_dnodeint_at_index - Start of function that inserts a new node at a given position.
 * @h: The pointer
 * @idx: the Index starts at 0
 * @n : Number
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *current = *h;
    unsigned int count = 0;

	if (h == NULL)
        return NULL;

    if (idx == 0)
        return add_dnodeint(h, n);


    while (current != NULL && count < idx - 1)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
        return add_dnodeint_end(h, n);

    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->prev = current;
    new_node->next = current->next;

    if (current->next != NULL)
        current->next->prev = new_node;

    current->next = new_node;

    return new_node;
}
