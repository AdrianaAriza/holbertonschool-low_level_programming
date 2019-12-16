#include"lists.h"
/**
 *delete_dnodeint_at_index - delete a node
 *@head: head
 *@index: index
 *Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *aux2;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);
	aux = *head;
	if (index = 0)
	{
		if (aux->next)
			aux->next->prev = NULL;
		*head = aux->next;
		free(aux);
		return (1);
	}
	while (i < (index - 1))
	{
		aux = aux->next;
		i++;
		if (!aux)
			return (-1);
	}
	aux2 = aux->next->next;
	free(aux->next);
	aux->next = aux2;
	aux2->prev = aux;
	return (1);
}
