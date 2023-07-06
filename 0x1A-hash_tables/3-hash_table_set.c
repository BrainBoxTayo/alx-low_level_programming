#include "hash_tables.h"
/**
  * hash_table_set - adds an element to the hash table
  * @ht: pointer to the hash table
  * @key: key
  * @value: value associated with the key
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *collision_node;
	unsigned long int index;

	if (key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}
	else
	{
		collision_node = ht->array[index];
		ht->array[index] = new_node;
		new_node->next = collision_node;
	}
	return (1);
}
