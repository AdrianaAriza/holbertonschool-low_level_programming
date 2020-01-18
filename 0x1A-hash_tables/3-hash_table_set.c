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
	idx  = key_index((unsigned char *) key, ht->size);
	aux = ht->array[idx];
	while (aux)
	{
		if (strcmp(aux, str) == 0)
		{
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	return (1);
}
