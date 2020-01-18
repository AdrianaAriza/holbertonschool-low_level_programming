#include"hash_tables.h"
/**
 *hash_table_get - get a value
 *@ht: hash table
 *@key: key
 *Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *aux;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (!ht->array[idx])
		return (NULL);
	aux = ht->array[idx];
	while (aux && strcmp(aux->key, key) != 0)
		aux = aux->next;
	if (aux)
		return (aux->value);
	return (NULL);
}
