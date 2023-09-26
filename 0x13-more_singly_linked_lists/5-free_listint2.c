#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Pointer to the head of the listint_t list.
 */

void free_listint2(listint_t **head)
{
	listint_t *curr; /*Declare a pointer to traverse the list*/

	if (head == NULL)
		return; /*Check if head is NULL (no list to free)*/
	while (*head != NULL)
	{
		curr = *head;/*Store the current node*/
		*head = (*head)->next;/*Move head to the next node*/
		free(curr);/*Free the current node*/
	}
}
