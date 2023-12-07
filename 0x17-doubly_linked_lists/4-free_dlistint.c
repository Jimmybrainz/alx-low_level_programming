#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
