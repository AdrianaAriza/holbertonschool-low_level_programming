#include <stdio.h>
/**
 * main- este programa imprime enteros con put char
 *
 *Return: always 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
}
