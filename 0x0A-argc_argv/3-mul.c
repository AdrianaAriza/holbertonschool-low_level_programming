#include<stdio.h>
int stint (char *n);
/**
 *stint - string to int
 *@n: string
 *Return: int;
 */
int stint (char *n)
{
	int nint = 0, i;

	for (i = 0; n[i] != '\0'; i++)
	{
		nint = nint * 10;
		if (n[i] == '-')
			continue;
		nint = nint + (n[i] - '0');
	}
	if (n[0] == '-')
		nint = -nint;
	return (nint);
}
/**
 *main - multiplies two numbers
 *@argc: number of parameters
 *@argv: parameters
 *Return: 0;
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	int i = 1, m, n = 1;

	for (; argv[i] != '\0'; i++)
	{
		m = stint(argv[i]);
		n = n * m;
	}
	printf("%d\n", n);
	return (0);
}
