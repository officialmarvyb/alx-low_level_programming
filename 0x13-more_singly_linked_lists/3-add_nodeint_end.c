#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the listint_t list.
 * @n: Integer value to add to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwnode; /*Declare a pointer to new node*/
	listint_t *curr; /*Declare a pointer to traverse the list*/

	nwnode = malloc(sizeof(listint_t)); /*Allocate memory for new node*/
	if (nwnode == NULL)
		return (NULL); /*Return NULL if mem alloc fails*/

	nwnode->n = n;/*Assign the value 'n' to new node's data*/
	nwnode->next = NULL;/*Initialize the new node's next pointer to NULL*/

	if (*head == NULL)
	{
	*head = nwnode; /*If the list is empty, set head to new node*/
	}
	else
	{
		curr = *head; /*Initialize 'curr' to head of the list*/
		while (curr->next != NULL)
		{
			curr = curr->next;/*Traverse list until end is reachd*/
		}
		curr->next = nwnode;/*Set last node next pointer to new node*/
	}
	return (nwnode);/*Return the address of the new element*/
}
