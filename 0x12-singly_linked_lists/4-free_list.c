#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *current;/*Create a pointer to the current node*/

	while (head != NULL)/*Loop through the linked list until it's empty*/
	{
		current = head;/*Point 'current' to the head node*/
		head = head->next;/* Move 'head' to the next node*/
		free(current->str);/*Free the string stored in the current node*/
		free(current); /*Free the current node itself*/
	}
}

