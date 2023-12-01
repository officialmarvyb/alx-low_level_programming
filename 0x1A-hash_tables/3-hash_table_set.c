#include "hash_tables.h"

/**
 * add_node - adds a new node at the beginning of hash_node_t
 *
 * @head: Pointer to head of the hash_node_t
 * @key: key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int add_node(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	hash_node_t *aux = (*head);

	if (new_node == NULL)
		return (0);

	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			free(new_node);
			return (1);
		}
		aux = aux->next;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = (*head);
	(*head) = new_node;
	return (1);
}

/**
 * hash_table_set - To Add or update an element in a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 1.
 *         Else - 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	int returAdd = 0;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	returAdd = add_node(&(ht)->array[index], (char *)key, (char *)value);
	if (returAdd == 1)
		return (1);
	return (0);
}
