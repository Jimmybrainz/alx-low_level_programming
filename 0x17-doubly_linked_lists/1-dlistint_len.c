#include "lists.h"

/**
 * dlistint_len - function that returns
 * the number of elements in a dlistint_t list
 * @h: head pointer
 *Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
