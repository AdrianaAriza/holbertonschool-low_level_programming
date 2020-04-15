#include"hash_tables.h"
/**
 *hash_table_print - prints hash table
 *@ht: hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **aux, *aux2;
	unsigned int i = 0, cont  = 0, flag = 0;

	if (!ht)
		return;
	aux = ht->array;

	putchar(123);
	while (cont < ht->size)
	{
		aux2 = aux[i];
		while (aux2)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", aux2->key, aux2->value);
			flag = 1;
			if (aux2->next)
				printf(", "), flag = 0;
			aux2 = aux2->next;
		}
		aux++;
		cont++;
	}
	putchar(125);
	putchar('\n');
}
