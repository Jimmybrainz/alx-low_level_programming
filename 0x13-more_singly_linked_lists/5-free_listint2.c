#include "lists.h"

/**
 *free_listint2 - frees a listint_t list and sets the head to NULL
 *@head: double pointer to the first node in the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
