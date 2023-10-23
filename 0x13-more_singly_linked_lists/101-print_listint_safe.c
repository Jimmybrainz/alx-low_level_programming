#include "lists.h"

/**
 *print_listint_safe - prints a listint_t linked list
 *@head: pointer to the first node in the list
 *Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount = 0;
	Alist_t *auxHead, *auxNode, *auxTemp;

	auxHead = NULL;

	while (head != NULL)
	{
		auxNode = (Alist_t *)malloc(sizeof(Alist_t));
		if (auxNode == NULL)
			exit(98);
		auxNode->p = (void *)head;
		auxNode->next = auxHead;
		auxHead = auxNode;
		auxTemp = auxHead;

		while (auxTemp->next != NULL)
		{
			auxTemp = auxTemp->next;
			if (head == auxTemp->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_Alist(&auxHead);

				return (nodeCount);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodeCount++;
	}
	free_Alist(&auxHead);

	return (nodeCount);
}

/**
 *free_Alist - frees a linked list
 *@head: pointer to the first element on the list
 */

void free_Alist(Alist_t **head)
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
