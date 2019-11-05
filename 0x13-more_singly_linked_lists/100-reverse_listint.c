
#include"lists.h"
/**
 *reverse_listint - reverse a list
 *@head: header
 *Return: header of list in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a_head, *aux = NULL;

	while (*head)
	{
		a_head = (*head)->next;
		(*head)->next = aux;
		aux = *head;
		*head = a_head;
	}
	*head = aux;
	return (*head);
}
