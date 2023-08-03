#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of the list.
 * @head: Pointer to the head (first node) of the list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the nth node, or NULL if the index is out of range.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (i < index)
	{
		if (haed->next == NULL)
			return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}
