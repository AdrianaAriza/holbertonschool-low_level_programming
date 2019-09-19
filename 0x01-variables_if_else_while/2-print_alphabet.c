#include <stdio.h>

/**
 * main - Abecedario
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	char b;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	b = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
