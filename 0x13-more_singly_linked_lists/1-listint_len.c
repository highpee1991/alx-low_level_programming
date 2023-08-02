#include "lists.h"

/**
 * listint_len - Gets the number of nodes in a singly linked list.
 * @h: Pointer to the head (first node) of the list.
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;	}
	return (counter);
}
