#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t cnode = 0;/* Initialize a counter for the number of nodes */
	listint_t *curr, *nxt;/* Declare pointers to traverse the list */

	if (h == NULL || *h == NULL)
		return (0);/* If the list is empty or uninitialized, rtun 0*/
	curr = *h;/* Start from the head of the list */
	while (curr != NULL)
	{
		nxt = curr->next; /* Store the next node in 'next' */
		free(curr);/* Free the current node */
		cnode++;/* Increment the node count */
		/* Check if we have reached a loop in the list */
		if (nxt != NULL && nxt >= nxt->next)
		{
			*h = NULL;/*Set head to NULL avoid issues with list*/
			break;/*Exit the loop to avoid infinite looping */
		}
		curr = nxt; /* Move to the next node in the list */
	}
	return (cnode);/*Return the size of the list that was freed */
}
