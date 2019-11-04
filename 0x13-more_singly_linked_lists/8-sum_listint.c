#include "lists.h"
/**
 *sum_listint - add the elements of a list
 *@head: header of the list
 *Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int n = 0;

	while (aux)
	{
		n = n + aux->n;
		aux = aux->next;
	}
	return (n);
}
