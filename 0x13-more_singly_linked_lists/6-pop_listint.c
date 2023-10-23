#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list,
 *and returns the head node's data (n)
 *@head: double pointer to the first node in the list
 *Return: the data('n') of the head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	old_head = *head;
	n = old_head->n;
	*head = old_head->next;
	free(old_head);

	return (n);
}
