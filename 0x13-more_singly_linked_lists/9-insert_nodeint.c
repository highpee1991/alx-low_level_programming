#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a node at a specific index in the list.
 * @head: Pointer to the head (first node) of the list.
 * @idx: Index at which the new node should be inserted (starting from 0).
 * @n: Value of the new node to be inserted.
 *
 * Return: Pointer to the head of the modified list, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}

	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = current->next;
	current->next = new;

	return (new);
}

