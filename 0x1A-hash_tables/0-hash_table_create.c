#include"hash_tables.h"
/**
 *hash_table_create - creates a hash table
 *@size: size of hash talbe
 *Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	h_table = calloc(size, sizeof(hash_table_t));
	if (!h_table)
	{
		return (NULL);
	}
	return (h_table);
}
