#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 *
 * @ht: pointer to hash table
 *
 * Return: nothing(void)
 **/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int a;
	unsigned char _flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (_flag == 1)
				printf(", ");

			node = ht->array[a];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			_flag = 1;
		}
	}
	printf("}\n");
}
