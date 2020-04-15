#include "lists.h"
/**
 *print_dlistint - print element of a list
 *@h: header
 *Return: List lenght
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h->next)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	return (i + 1);
}
