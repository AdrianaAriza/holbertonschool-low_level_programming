#include<stdio.h>
/**
 *print_array - print an array
 *@n: number of positions to print
 *@a: the array
 *Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}
