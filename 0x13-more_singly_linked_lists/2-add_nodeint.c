#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the listint_t list.
 * @n: Integer value to add to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwnode; /*Declare a pointer to the new node*/

	nwnode = malloc(sizeof(listint_t)); /*Allocate memory for new node*/
	if (nwnode == NULL)
		return (NULL); /*Return NULL if memory allocation fails*/

	nwnode->n = n; /*Assign the value 'n' to the new node's data*/
	nwnode->next = *head; /*Set new node's next pointer to current head*/

	*head = nwnode; /*Update the head to point to the new node*/

	return (nwnode); /*Return the address of the new element*/
}
