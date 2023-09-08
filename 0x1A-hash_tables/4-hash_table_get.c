#include "hash_tables.h"

/**
 * hash_table_get - Given a key, get the corresponding value from a hash table.
 * @ht: The hash table to search in.
 * @key: The key to look up.
 * Return: The value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	/* Check if the hash table or key is NULL */
	if (!ht || !key)
		return (NULL);

	/* Calculate the index in the hash table where the key might be located */
	idx = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index to find a matching key */
	tmp = (ht->array)[idx];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}
