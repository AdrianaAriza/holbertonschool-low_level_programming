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
	while (n <= 8)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('9');
	return (0);
}
