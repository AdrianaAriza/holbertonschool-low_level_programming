#include"lists.h"
/**
 *get_nodeint_at_index - get a node
 *@head: the header
 *@index: index
 *Return: the node in the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = head;
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
