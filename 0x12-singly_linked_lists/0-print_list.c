#include"lists.h"
/**
 *print_list - print all the elemenst of a list
 *@h:pointer to list
 *Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *p = (list_t *)h;
	int i = 0;

	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] %p\n", p->str);
		else
			printf("[%i] %s\n", p->len, p->str);
		p = p->next;
		i++;
	}
	return (i);
}
