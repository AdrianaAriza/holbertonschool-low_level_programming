#include "lists.h"
/**
 *dlistint_len - print element of a list
 *@h: header
 *Return: List lenght
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h->next)
	{
		i++;
		h = h->next;
	}
	return (i + 1);
}
