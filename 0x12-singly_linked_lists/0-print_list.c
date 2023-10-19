#include "lists.h"

/**
 *print_list - Function that prints all the elements of a list_t list
 *@h: pointer to the first node of the list_t list
 *Return: number of nodes in the list(size_t)
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	/*traverse the linked list*/
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", (unsigned long)strlen(h->str), h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
