#include"lists.h"
/**
 *listint_len - calculates the size of a list
 *@h: header of the list
 *Return: size
 */
size_t listint_len(const listint_t *h)
{
	int cont = 0;
	listint_t *aux = (void *)h;

	while(aux != NULL)
	{
		aux = aux->next;
		cont++;
	}
	return (cont);
}
