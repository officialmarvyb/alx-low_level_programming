#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;/*Declare a pointer to a list node structure.*/
	/*Check if the input string is NULL; if so, return NULL.*/
	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));/*Allocate memory for a new list node.*/
	/*Check if memory allocation failed; if so, return NULL.*/
	if (new == NULL)
		return (NULL);
	/*Duplicate the input string&assign it to the new node's 'str' field.*/
	new->str = strdup(str);
	/*Check if strdup failed (memory allocation for the string*/
	 /*if so, free the allocated node.*/
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	/*Calculate length of d string&assign it to new node's 'len' field.*/
	new->next = *head;
	/*Set the new node's 'next' pointer to the current head of the list*/
	*head = new;/* Update the head pointer to point to the new node*/

	return (new);/*Return the address of the new element (new node).*/
}
