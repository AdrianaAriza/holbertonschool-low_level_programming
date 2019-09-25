#include<stdio.h>
/**
 *main - fibonacci
 *
 *Return: 0
 */

int main(void)
{
	int n1, n2;
	long long int sumaf, suma;

	n1 = 0;
	n2 = 1;
	suma = 0;
	sumaf = 0;

	while (suma < 4000000)
	{
		suma = n1 + n2;
		if (suma % 2 == 0)
		{
			sumaf = sumaf + suma;
		}
		n1 = n2;
		n2 = suma;
	}
	printf("%lld\n", sumaf);
	return (0);
}
