#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t cnode = 0; /*Initialize a counter for nodes*/

	while (h != NULL) /*Iterate through the linked list*/
	{
		printf("%d\n", h->n); /*Print the current node's value*/
		h = h->next; /*Move to the next node*/
		cnode++; /*Increment the node count*/
	}

	return (cnode); /*Return the total number of nodes*/
}
