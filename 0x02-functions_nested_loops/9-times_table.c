
#include"holberton.h"

/**
 *times_table - prints up to nine table
 *
 *
 *return: no return
 */

void times_table(void)
{
	int c1, c2, r;

	c1 = 0;
	while (c1 <= 9)
	{
		c2 = 0;
		while (c2 <= 9)
		{
			r = c1 * c2;
			if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r >= 10)
			{
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			if (c2 != 9)
			{
				_putchar(',');
			}
			c2++;
		}
		_putchar('\n');
		c1++;
	}
}
