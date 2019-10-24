#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
#include<string.h>
/**
 *main - calculadora
 *@argc: anguments cant
 *@argv: vector of arguments
 *Return: 1-fail / 0-ok
 */
int main(int argc, char *argv[])
{
	int (*pf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == 47 || argv[2][0] == 37) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	pf = get_op_func(argv[2]);
	printf("%d\n", pf(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
