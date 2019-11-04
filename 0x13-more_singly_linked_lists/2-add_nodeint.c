#include"lists.h"
/**
 *add_nodeint - Add a new node
 *@head: header
 *@n: element n of the structure
 *Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
