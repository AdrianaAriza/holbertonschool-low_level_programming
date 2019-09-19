#include <stdio.h>

/**
 * main - Este progrma imprime el Abecedario
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
