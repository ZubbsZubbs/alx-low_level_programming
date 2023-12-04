#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to be printed print.
 *
 * Description: Key/value pairs are printed in the order
 *              they in which appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int a;
	unsigned char flag_comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (flag_comma == 1)
				printf(", ");

			node = ht->array[a];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag_comma = 1;
		}
	}
	printf("}\n");
}
