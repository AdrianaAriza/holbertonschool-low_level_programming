#include"lists.h"
/**
 *delete_nodeint_at_index - delete a node
 *@head: header lists 
 *@index: index to delete a node
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t * aux,* aux2;
	unsigned int i = 0;

	aux = *head;
	if (!*head)
		return (-1);
	if (!index)
	{
		*head = aux->next;
		free(aux);
		return(1);
	}
	while (i < (index - 1))
	{
		aux = aux->next;
		i++;
		if(!aux)
			return (-1);
	}
	aux2 = aux->next->next;
	free(aux->next);
	aux->next = aux2;
	return (1);
}
