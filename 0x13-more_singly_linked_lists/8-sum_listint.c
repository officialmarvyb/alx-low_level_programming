#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data (n) or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int total = 0; /*Initialize a variable to store the sum*/

	while (head != NULL)
	{
		total = total + head->n; /*Add the data of the current node to the sum*/
		head = head->next; /*Move to the next node*/
	}
	return (total); /*Return the sum total*/
}
