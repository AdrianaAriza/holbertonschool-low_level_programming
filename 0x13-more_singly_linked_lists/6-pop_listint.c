#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t
 *@head:header
 *Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n = 0;

	if (*head == NULL)
		return (0);
	n = ((*(*head)).n);
	aux = (*(*head)).next;
	free(*head);
	*head = aux;
	return (n);
}
