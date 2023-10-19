#include "lists.h"

/**
 *list_len - Function that returns the number of elements in a linked list
 *@h: pointer to the first node of the list_s list
 *Return: the number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
