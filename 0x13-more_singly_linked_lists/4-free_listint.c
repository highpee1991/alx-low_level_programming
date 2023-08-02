#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list of integers (listint_t).
 * @head: Pointer to the head (first node) of the list.
 * Description:
 * This function frees all the nodes in a singly linked list of integers.
 * It starts from the head of the list and recursively frees each node,
 * including the head. The memory occupied by each node is deallocated using
 * the `free` function from the standard library.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);

	free(head);
}
