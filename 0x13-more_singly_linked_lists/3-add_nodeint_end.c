#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a singly linked list.
 * @head: Pointer to a pointer to the head (first node) of the list.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the current head of the list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*header = node;
		return (*header);
	}
	current = *header;
	while (current->next != NULL)
		current = current->next;
	current->next = node;
	return (*head);
}
