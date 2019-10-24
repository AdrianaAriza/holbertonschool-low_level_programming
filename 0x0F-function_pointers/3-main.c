#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
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
	if ((argv[2][0] != 42 && argv[2][0] != 43 && argv[2][0] != 45 && argv[2][0]
	     != 47 && argv[2][0] != 37) || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == 47 || argv[2][0] == 37) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	pf = get_op_func(argv[3]);
	printf("%d\n", pf(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
