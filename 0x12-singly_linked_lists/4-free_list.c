#include "lists.h"

/**
 *free_list - function that frees a list_t list
 *@head: pointer to thr first node of the list_t list
 */

void free_list(list_t *head)
{
	/*Temporal node used to traverse to the list*/
	list_t *tmp;

	/*Traverse the list*/
	while (head != NULL)
	{
		tmp = head;

		head = head->next;

		free(tmp->str);
		free(tmp);
	}
}
