#include <stdio.h>

/**
 *main - 00-99
 *
 *Return: 0
 */

int main(void)
{
	int d, c, cont=0;
	
	d = 0;
	while (d <= 9)
	{
		cont++;
		c = cont;
		while (c <= 9)
		{
			putchar(d + '0');
			putchar(c + '0');
			if (c != 9 || d != 8)
			{
			putchar(',');
			putchar(' ');
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
