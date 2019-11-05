#include"lists.h"
/**
 *free_listint2 - free list
 *@head: header of the list
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!*head)
		return;
	while (*head != NULL)
	{
		aux = (*(*head)).next;
		free(*head);
		*head = aux;
	}
	*head = NULL;
}
