#include "lists.h"

/**
 * sum_listint - Sums all elements of a list.
 * @head: Pointer to the head (first node) of the list.
 *
 * Return: The sum of all elements in the list.
 */
int sum_listint(listint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
		haed = head->next;
	}

	return (sum);
}
