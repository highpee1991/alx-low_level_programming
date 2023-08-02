#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a singly linked list.
 * @head: Pointer to a pointer to the head (first node) of the list.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the new head of the list (i.e., the new node).
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;

	*head = node;
	return (*head);
}
