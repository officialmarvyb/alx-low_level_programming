#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count_node = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, (h->str ? h->str : "(nil)"));
	count_node++;
	h = h->next;
	}

	return (count_node);
}
