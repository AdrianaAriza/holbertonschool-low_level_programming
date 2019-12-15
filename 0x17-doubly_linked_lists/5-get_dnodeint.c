#include"lists.h"
/**
 *get_dnodeint_at_index - get a node
 *@head: the header
 *@index: index
 *Return: the node in the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index)
	{
		aux = aux->next;
		i++;
		if (!aux)
			return (NULL);
	}
	return (aux);
}
