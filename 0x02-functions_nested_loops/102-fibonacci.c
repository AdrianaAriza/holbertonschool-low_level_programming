#include<stdio.h>
/**
 *main - fibonacci
 *
 *Return: 0
 */

int main(void)
{
	long int n1, n2, suma, cont;

	n1 = 0;
	n2 = 1;
	suma = 0;
	cont = 0;

	while (cont < 50)
	{
		suma = n1 + n2;
		printf("%ld, ", suma);
		cont++;
		n1 = n2;
		n2 = suma;
	}
	printf("\n");
	return (0);
}
