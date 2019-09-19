#include <stdio.h>
/**
 *main- numeros 9
 *
 *Return: 0
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		if(n != 9)
		{
			putchar(',');
			putchar(' ');

		}
		n++;
	}
	putchar('\n');
	return (0);
}
