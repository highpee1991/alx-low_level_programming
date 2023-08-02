#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list and sets its head to NULL.
 * @head: Double pointer to the head (first node) of the list.
 * Description:
 * This function frees all the nodes in a singly linked list of integers
 * and sets the head of the list to NULL. It takes a double pointer `head`
 * as input, which points to the head of the list. The function traverses
 * the list and frees each node's memory using the `free` function from the
 * standard library. After freeing all nodes, the head pointer is set to NULL,
 * effectively making the list empty.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
