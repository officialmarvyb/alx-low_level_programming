#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *nxt;

	if (head != NULL)
	{
		nxt = *head;
		while ((tmp = nxt) != NULL)
		{
			nxt = nxt->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t cnodes = 0;
	listp_t *hptr = NULL, *w, *sum;
	listint_t *tmp;

	while (*h != NULL)
	{
		w = malloc(sizeof(listp_t));
		if (w == NULL)
			exit(98);

		w->p = (void *)*h;
		w->next = hptr;
		hptr = w;

		sum = hptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (cnodes);
			}
		}

		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		cnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (cnodes);
}

