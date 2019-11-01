#include"lists.h"
/**
 *free_list - Free list
 *@head: Head of the list
 *Return:Void
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
