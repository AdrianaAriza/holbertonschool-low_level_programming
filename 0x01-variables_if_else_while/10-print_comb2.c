#include <stdio.h>

/**
 *main - 00-99
 *
 *Return: 0
 */

int main(void)
{
	int d;
	int c;

	d = 0;
	while (d <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			putchar(d + '0');
			putchar(c + '0');
			if (c != 9 || d != 9)
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
