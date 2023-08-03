#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Removes the head node from a list and returns its contents.
 * @head: Double pointer to the head (first node) of the list.
 *
 * Return: The integer value stored in the head node, or 0 if the list is empty
 *         or the head is NULL.
 *
 * Description:
 * This function pops off the head node (first node) from a singly linked list
 * of integers (`listint_t`) and returns the value stored in the head node.
 * The function takes a double pointer `head` as input, which points to the
 * head (first node) of the list. If the list is empty (head is NULL),
 * the function returns 0. Otherwise, it removes the head node,
 * updates the head to point to the next node, and frees the memory occupied by
 * the removed node. Finally, the function returns the value stored in the
 * removed node.
 *
 * Note:
 * The function does not handle freeing the entire list; it only
 * removes the head node.
 * The caller should ensure to free the entire list if necessary.
 */
int pop_listint(listint_t **head)
{
	listint_t *current, *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	current = tmp = *head;
	*head = current->next;
	free(tmp);

	return (current->n);
}
