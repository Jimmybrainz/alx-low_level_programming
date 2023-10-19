#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end of a list_t list
 *@head: double pointer to the first node of the list_t list
 *@str: new string to be added to the list
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);

		return (NULL);
	}
	new_node->len = (unsigned int)strlen(str);

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);

	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	return (new_node);
}
