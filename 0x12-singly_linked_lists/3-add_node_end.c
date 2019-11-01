#include"lists.h"
#include<string.h>
/**
 *add_node - add new element at the end
 *@head: head of the list
 *@str: str element
 *Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux, *new;
	int i = 0;

	aux = *head;
	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if(*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = new;

	return (new);
}
