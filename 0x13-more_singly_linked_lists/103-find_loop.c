#include "lists.h"

/**
 *find_listint_loop - finds the loops in a linked list
 *@head: pointer to the first node in the list
 *Return: the address of the node where the loops starts, or NULL
 *if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		/*loop detected*/
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			/*start of loop*/
			return (slow);
		}
	}

	/*no loop*/
	return (NULL);
}
