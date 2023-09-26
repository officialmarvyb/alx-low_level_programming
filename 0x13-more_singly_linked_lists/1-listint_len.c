#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t cnode = 0; /*Initialize a counter for elements*/

	while (h != NULL) /*Iterate through the linked list*/
	{
		cnode++; /*Increment the element count*/
		h = h->next; /*Move to the next node*/
	}

	return (cnode); /*Return the total number of elements*/
}
