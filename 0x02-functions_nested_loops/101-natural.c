#include<stdio.h>

/**
 *main - x3 x5
 *
 *Return: 0
 */
int main(void)
{
	int a, sum = 0;

	a = 0;
	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum = sum + a;
		}
		a++;
	}
	printf("%i\n", sum);
	return (0);
}
