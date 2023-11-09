#include "lists.h"

/**
 * get_dnodeint_at_index - It locates a node in a dlistint_t list.
 * @head: Head of the dlistint_t list.
 * @index: Node to locate.
 *
 * Return: the address of the located node.
 *         Otherwise - NULL, If the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}

	return (head);
}
