#include"lists.h"
/**
 *insert_dnodeint_at_index - insert node at idx
 *@idx: index
 *@n: n element of the structure
 *@h: header
 *Return: address of new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	aux = *h;
	if (!idx)
	{
		new->n = n;
		new->next = aux;
		new->prev = NULL;
		*h = new;
	}
	else
	{
		while (i < (idx - 1))
		{
			aux = aux->next;
			i++;
			if (!aux)
				return (NULL);
		}
		new->n = n;
		new->next = aux->next;
		new->prev = aux;
		aux->next->prev = new;
		aux->next = new;
	}
	return (new);
}
