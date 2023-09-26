#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current;
    size_t count = 0;
    const listint_t *nodes[10000]; /* Assuming a maximum of 10,000 nodes */

    current = head;
    while (current != NULL)
    {
        size_t i;

        /* Check for a loop */
        for (i = 0; i < count; i++)
        {
            if (current == nodes[i])
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                return (count);
            }
        }

        /* Print current node */
        printf("[%p] %d\n", (void *)current, current->n);

        /* Add current node to the array */
        nodes[count++] = current;

        current = current->next;
    }

    return (count);
}

