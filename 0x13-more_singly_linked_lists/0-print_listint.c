#include"lists.h"
/**
 *print_listint - Print a list
 *@h: Header of the list
 *Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *aux = (void *) h;
	int cont = 0;

	while (aux != NULL)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
		cont++;
	}
	return (cont);
}
