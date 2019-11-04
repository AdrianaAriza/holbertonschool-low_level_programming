#include"lists.h"
/**
 *free_listint - frees a list
 *@head: header of the list
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
