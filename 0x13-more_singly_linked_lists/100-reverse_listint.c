#include "lists.h"

/**
 *reverse_listint - reverses a listint_t linked list
 *@head: double pointer to the first node in the list
 *Return: a pointer to the first node of the reversed list
 *or NULL if the list is empty
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;

	return (*head);
}
