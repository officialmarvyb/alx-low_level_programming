#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;/*Create a temporary pointer to the head*/
	int j;/*Variable to store the data of the head node*/

	if (*head == NULL)
	return (0); /*If the list is empty, return 0*/

	temp = *head; /*Store the current head node in temp*/
	j = temp->n; /*Get the data (n) of the head node*/
	*head = (*head)->next; /*Move head to the next node*/
	free(temp); /*Free the previous head node*/
	return (j); /*Return the data of the former head node*/
}
