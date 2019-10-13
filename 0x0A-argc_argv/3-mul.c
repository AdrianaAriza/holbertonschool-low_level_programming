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
	int r = 0;

	if (argv[2] == '\0')
	{
		return (1);
	}
	r = stint(argv[1]) * stint(argv[2]);
	printf("%i\n", r);
	return (0);
}
