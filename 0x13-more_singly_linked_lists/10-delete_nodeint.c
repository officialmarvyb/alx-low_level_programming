#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *tmp;
	unsigned int j;

	j = 0;

	if (*head == NULL)
		return (-1); /*If the list is empty, return -1 i.e failure*/
	if (index == 0)
	{
		/*If true,the node at index 0 should be deleted*/
		*head = (*head)->next;
		free(curr);
		return (1); /*Return 1 i.e Success*/
	}
	/*Traverse the list to find the node at index (index - 1)*/
	while (j++ < index - 1)
	{
		if (curr == NULL || curr->next == NULL)
			return (-1); /*Return -1,Index is out of bounds*/
		curr = curr->next;
	}
	/*Store the reference to the next node*/
	tmp = curr->next;
	if (tmp == NULL)
		return (-1);/*Return -1 i.e failure-Index is out of bounds*/
	/*Update next pointer of prev node to skip the deleted node*/
	curr->next = tmp->next;
	free(tmp);/*Free the memory of the deleted node*/

	return (1); /*Successful*/
}
