#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;
	listint_t *nxt;

	while (curr != NULL)
	{
		nxt = curr->next;/*Store the next node temporarily*/
		curr->next = prev;/*Reverse next ptr of the current node*/

		/*Move to the next nodes*/
		prev = curr;
		curr = nxt;
	}
	*head = prev;/*Update the head to point to the last node*/
	return (*head);
}
