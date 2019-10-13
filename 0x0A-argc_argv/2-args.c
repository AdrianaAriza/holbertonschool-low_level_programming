#include<stdio.h>
/**
 *main - print the arguments
 *@argc: number of rguments
 *@argv: arguments
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	for (; argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
