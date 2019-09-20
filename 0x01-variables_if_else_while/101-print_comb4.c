#include <stdio.h>

/**
 *main - 00-99
 *
 *Return: 0
 */

int main(void)
{
	int u, d, c;

	c = 0;
	while (c <= 9)
	{
		d = 1;
		while (d <= 9)
		{
			u = 2;
			while (u <= 9)
			{
				if (u > d && d > c)
				{
					putchar(c + '0');
					putchar(d + '0');
					putchar(u + '0');
					if (u != 9 || d != 8 || c != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			u++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
