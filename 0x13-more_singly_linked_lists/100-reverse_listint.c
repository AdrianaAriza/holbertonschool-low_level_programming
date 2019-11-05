#include"lists.h"
/**
 *reverse_listint - reverse a list
 *@head: header
 *Return: header of list in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	int cont = 0, i = 0;
	listint_t *a_head, *aux;

	a_head = *head;
	while (a_head->next != NULL)
	{
		a_head = a_head->next;
		cont++;
	}
	while (cont > 0)
	{
		i = 0;
		aux = *head;
		while (i < (cont - 1))
		{
			aux = aux->next;
			i++;
		}
		aux->next->next = aux;
		cont--;
	}
	aux->next->next = NULL;
	free(aux);
	*head = a_head;
	return (*head);
}
