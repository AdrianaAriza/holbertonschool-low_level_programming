#include"lists.h"
/**
 *add_nodeint_end - Adds a node at the end
 *@head: header of the list
 *@n: element n of the esctucture
 *Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *new;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (aux == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
	return (NULL);
}
