#include "lists.h"

/**
 *free_listint_safe - frees a listint_t linked list
 *@h: double pointer to the first element in the list
 *Return: the number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodeCount = 0;
	Alist_t *auxHead, *auxNode, *auxTemp;
	listint_t *tempNode;

	auxHead = NULL;

	while (*h != NULL)
	{
		auxNode = (Alist_t *)malloc(sizeof(Alist_t));
		if (auxNode == NULL)
			exit(98);
		auxNode->p = (void *)*h;
		auxNode->next = auxHead;
		auxHead = auxNode;
		auxTemp = auxHead;

		while (auxTemp->next != NULL)
		{
			auxTemp = auxTemp->next;
			if (*h == auxTemp->p)
			{
				free_Alist(&auxHead);
				*h = NULL;

				return (nodeCount);
			}
		}
		tempNode = (*h)->next;
		free(*h);
		*h = tempNode;
		nodeCount++;
	}
	free_Alist(&auxHead);
	*h = NULL;

	return (nodeCount);
}

/**
 * free_Alist2 - frees a linked list
 * @head: pointer to first element on the list
 */

void free_Alist2(Alist_t **head)
{
	Alist_t *auxTemp, *currentNode;

	if (head != NULL)
	{
		currentNode = *head;
		while ((auxTemp = currentNode) != NULL)
		{
			currentNode = currentNode->next;
			free(auxTemp);
		}
		*head = NULL;
	}
}
