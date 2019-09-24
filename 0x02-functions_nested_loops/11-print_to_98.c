#include<stdio.h>
#include"holberton.h"
/**
 *print_to_98 - print numbers up to 98
 *@n: the number to process
 *Return: null
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 98)
		{
			printf("%i, ", n);
			n--;
		}
	}
	if (n < 98)
	{
		while (n != 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	printf("%i\n", n);
}

