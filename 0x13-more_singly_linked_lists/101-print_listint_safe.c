#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t cnode = 0;
	const listint_t *curr;
	const listint_t *nodes[10000];/*Assuming a max of 10,000 nodes*/

	curr = head;
	while (curr != NULL)
	{
		size_t j;

		for (j = 0; j < cnode; j++)/* Check for a loop */
		{
			if (curr == nodes[j])
			{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			return (cnode);
			}
		}
		printf("[%p] %d\n", (void *)curr, curr->n);/* Print current node */
		nodes[cnode++] = curr;/* Add current node to the array */
		curr = curr->next;
	}
	return (cnode);
}
