#include <stdio.h>

/**
 *main - 00-99
 *
 *Return: 0
 */

int main(void)
{
	int n1, n2, div1, mod1, div2, mod2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = 1;
		while (n2 <= 99)
		{
			if (n2 > n1)
			{
				div1 = n1 / 10;
				mod1 = n1 % 10;
				div2 = n2 / 10;
				mod2 = n2 % 10;
				putchar(div1 + '0');
				putchar(mod1 + '0');
				putchar(' ');
				putchar(div2 + '0');
				putchar(mod2 + '0');
				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}

	putchar('\n');
	return (0);
}
