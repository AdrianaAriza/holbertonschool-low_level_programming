#include <stdio.h>

/**
 * main - Este progrma imprime el Abecedario
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
