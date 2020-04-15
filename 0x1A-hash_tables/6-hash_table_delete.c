#include"hash_tables.h"
/**
 *hash_table_delete - deletes hash table
 *@ht: hash table
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux2, *aux3;
	unsigned int cont  = 0;

	if (!ht)
		return;

	while (cont < ht->size)
	{
		aux2 = ht->array[cont];
		while (aux2)
		{
			aux3 = aux2->next;
			free(aux2->key);
			free(aux2->value);
			free(aux2);
			aux2 = aux3;
		}
		cont++;
	}
	free(ht->array);
	free(ht);
}
