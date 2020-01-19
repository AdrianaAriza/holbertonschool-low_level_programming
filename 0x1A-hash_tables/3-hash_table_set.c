#include"hash_tables.h"
/**
 *hash_table_set - set a new key/value
 *@ht: hash table
 *@key: key
 *@value: value
 *Return: 1 succeeded / 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *aux;
	unsigned long int idx = 0;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	idx  = key_index((unsigned char *)key, ht->size);
	aux = ht->array[idx];
	while (aux && strcmp(aux->key, key) != 0)
		aux = aux->next;
	if (aux)
	{
		free(aux->value);
		aux->value = strdup(value);
		if (!aux->value)
			return (0);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	new_node->key = strdup(key);
	if (!(new_node->key))
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!(new_node->value))
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	return (1);
}
