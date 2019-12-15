#include"lists.h"
/**
 *sum_dlistint - um of all the data (n) of a dlistint_t linked list
 *@head: head
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int n = 0;

	aux = head;
	while (aux)
	{
		n = n + aux->n;
		aux = aux->next;
	}
	return (n);
}
