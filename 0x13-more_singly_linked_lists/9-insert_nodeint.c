#include"lists.h"
/**
 *insert_nodeint_at_index - insert node at idx
 *@idx: index
 *@n: n element of the structure
 *@head: header
 *Return: address of new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	aux = *head;
	while (i < (idx - 1))
	{
		aux = aux->next;
		i++;
		if (!aux)
			return (NULL);
	}
	new->n = n;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
