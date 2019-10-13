#include <stdio.h>
#include <stdlib.h>
/**
 *main - cant of change
 *@argc: number of rguments
 *@argv: arguments
 *Return: 0;
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int x = 0, cont = 0, i = 0;

	for (; argv[i] != '\0'; i++)
		;
	if (i != 1)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
	}
	if (x >= 25)
	{
		cont = x / 25;
		x = x % 25;
	}
	if (x >= 10)
	{
		cont = x / 10;
		x = x % 10;
	}
	if (x >= 5)
	{
		cont = x / 5;
		x = x % 5;
	}
	if (x >= 2)
	{
		cont = x / 2;
		x = x % 2;
	}
	if (x >= 1)
		++cont;
	printf("%i\n", cont);
	return (0);
}
