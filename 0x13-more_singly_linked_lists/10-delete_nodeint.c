#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at the index of a listint_t list
 *@head: double pointer to the first node in the list
 *@index: index of the node that should be deleted, starting at 0
 *Return: 1 if it succeede, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *next_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);

		return (1);
	}
	for (i = 0; i < index - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
	{
		return (-1);
	}
	next_node = current_node->next->next;
	free(current_node->next);
	current_node->next = next_node;

	return (1);
}
