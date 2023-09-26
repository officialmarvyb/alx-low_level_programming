#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t cnode = 0;/*Initialize a counter for nodes*/

	while (head != NULL)/*Iterate thr linked list & print Val*/
	{
		printf("[%p] %d\n", (void *)head, head->n);
		cnode++;
		head = head->next;/*Move head pointer to the next node */

		/* Check if a loop is reached*/
		if (head != NULL && head->next >= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (cnode);
}
