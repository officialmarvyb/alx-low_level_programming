#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* Declare a pointer to a list node structure.*/
	list_t *current = *head; /*Declare a pointer to transverse the list*/

	if (str == NULL)
		return (NULL);
	/* Check if the input string is NULL; if so, return NULL.*/

	new_node = malloc(sizeof(list_t));/*Allocate mem for new list node.*/
	if (new_node == NULL)
		return (NULL);/*Check if mem alloc failed; if so, return NULL.*/
	/*Duplicate input str& assign it to new node's 'str' field.*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)/*Check if strdup failed*/
	{
		free(new_node); /*if so, free the allocated node.*/
		return (NULL);
	}
	new_node->len = strlen(str);
	/*Calc length of string & assign it to the new node's 'len' field.*/
	new_node->next = NULL;
	/*Set the new node's 'next' pointer to NULL since it's the last node.*/
	if (*head == NULL)
	{
		*head = new_node; /*If list is empty, set new node as head.*/
	}
	else
	{
		while (current->next != NULL)
		current = current->next; /*Traverse list to find last node.*/
		current->next = new_node;
		/*Set the next pointer of the last node to the new node.*/
	}

	return (new_node);/*Return address of the new element*/
}
