#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nwnode, *curr = *head;
	unsigned int j;

	j = 0;
	/*Create a new node & check if mem alloc was successful*/
	nwnode = malloc(sizeof(listint_t));
	if (nwnode == NULL)
		return (NULL);
	nwnode->n = n;/*Initialize the new node*/
	/*If the index is 0, insert the new node at the beginning*/
	if (idx == 0)
	{
		nwnode->next = *head;
		*head = nwnode;
		return (nwnode);
	}

	/*Traverse the list to find the node at index (idx - 1)*/
	while (j++ < idx - 1)
	{
		if (curr == NULL)
		{
			free(nwnode);
			return (NULL);
		}
		curr = curr->next;
	}

	/*Insert the new node at the specified position*/
	nwnode->next = curr->next;
	curr->next = nwnode;

	return (nwnode);
}
