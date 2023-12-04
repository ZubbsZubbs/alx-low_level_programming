#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with
 *                  a key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: The key to the value to be gotten.
 *
 * Return: If the key cannot be matched - NULL.
 *         else - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	node = ht->array[ind];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
