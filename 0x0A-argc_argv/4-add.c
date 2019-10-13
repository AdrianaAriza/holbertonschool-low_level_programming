#include<stdio.h>
/**
 *main - add numbers
 *@argc: number of parameters
 *@argv: parameters
 *Return: 0;
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	int i = 1, m = 0, nint = 0, j = 0;

	if (argv[1] == '\0')
	{
		printf("0\n");
		return (0);
	}
	for (; argv[i] != '\0'; i++)
	{
		nint = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 58)
			{
				printf("Error\n");
				return (1);
			}
			nint = nint * 10;
			nint = nint + (argv[i][j] - '0');
		}
		m = m + nint;
	}
	printf("%d\n", m);
	return (0);
}
