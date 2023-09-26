#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Address of node where the loop starts, or NULL if no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr, *runner;

	if (!head)
		return (NULL);

	curr = head;
	runner = head;

	while (runner && runner->next)
	{
		curr = curr->next;
		runner = runner->next->next;

		if (curr == runner)
		{
			curr = head;
			while (curr != runner)
			{
				curr = curr->next;
				runner = runner->next;
			}
		return (curr);
		}
	}

	return (NULL);
}
