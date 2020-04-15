#include"lists.h"
/**
 *add_dnodeint_end - add anode
 *@head: head node
 *@n: data n
 *Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	aux = *head;
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (aux->next)
		aux = aux->next;
	new->prev = aux;
	aux->next = new;
	return (new);
}
