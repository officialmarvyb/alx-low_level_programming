#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t cnode = 0;/*Counter for the number of nodes*/
	listint_t *tmp;/*Temporary pointer to hold the next node*/

	while (*h)/*Continue while the head pointer is not NULL*/
	{
	/*Check if current node points to a previously visited node or itself*/
		if (*h <= (*h)->next)
		{
			*h = NULL;/*Set head to NULL to break the loop*/
			cnode++;/*Increment the node count*/
			break;/*Exit the loop*/
		}
		tmp = (*h)->next;/*Store the next node in a temporary pointer*/
		free(*h);/*Free the current node*/
		*h = tmp;/*Move the head to the next node*/
		cnode++;/*Increment the node count*/
	}
	return (cnode);/*Return the number of nodes freed*/
}
