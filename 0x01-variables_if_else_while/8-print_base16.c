#include <stdio.h>

/**
 *main - nomeros hexa
 *
 *Return: 0
 */

int main(void)
{
	int a;
	char c;

	a=0;
	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	c='a';
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar ('\n');
}
