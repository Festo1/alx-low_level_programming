#include "hash_tables.h"

/**
 * create_and_add_node - Malloc, set values, and insert a node into
 * the hash table.
 *
 * Description
 * This function creates a new hash node, sets its key and value,
 * and inserts it into
 * the specified index of the hash table's array.
 *
 * @ht: The hash table where the node will be inserted.
 * @key: The key for the new node (cannot be an empty string).
 * @value: The value associated with the key.
 * @idx: The index in the hash table's array where the node will be inserted.
 *
 * Return: 1 if successful, 0 if it fails.
 */
int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
			unsigned long int idx)
{
	hash_node_t *node = NULL; /* Declare a pointer to a hash node. */
	char *k;
	char *v;

	node = malloc(sizeof(hash_node_t)); /* Allocate memory for the new node. */
	if (!node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(node);
		return (0);
	}

	/* Set the key and value of the new node */
	node->key = k;
	node->value = v;

	if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (1);
}

/**
 * hash_table_set - Add an element to a hash table.
 *
 * Description
 * This function adds a key-value pair to the hash table. If the key
 * already exists, it updates the value; otherwise, it creates a new node
 * and inserts it.
 *
 * @ht: The hash table where the key-value pair will be added.
 * @key: The key for the new node (cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 if it fails.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = NULL;
	char *v;

	/* Check for invalid inputs and return 0 if any condition is met.*/
	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[idx]; /*  Traverse the linked list at the index.*/
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (node->value)
			free(node->value);
		node->value = v;
	}

	/* Create a new node and add it to the hash table. */
	return (create_and_add_node(ht, key, value, idx));
}
