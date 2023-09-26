#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t cnode = 0;/*Initialize a counter to track num of nodes*/

	tortoise = head;/*Initialize tortoise to the head of the list*/
	hare = head;/*Initialize hare to the head of the list*/

	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		/*Print the current node's address and value*/
		tortoise = tortoise->next;/*Move tortoise one step*/
		hare = hare->next->next;/*Move hare two steps*/
		cnode++;

		if (tortoise == hare)/*If tort & hare meet-loop detected*/
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			exit(98);
		}
	}

	while (tortoise != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		cnode++;
	}

	return (cnode);
}
