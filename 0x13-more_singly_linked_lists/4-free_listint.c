#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the listint_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *curr; /*Declare a pointer to traverse the list*/

	while (head != NULL)
	{
		current = head; /*Store the current node*/
		head = head->next; /*Move head to the next node*/
		free(curr); /*Free the current node*/
	}
}
