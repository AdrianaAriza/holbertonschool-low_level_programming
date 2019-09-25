#include"holberton.h"
/**
 *print_times_table - prints up to nine table
 *@n: table number
 *Return: no return
 */
void print_times_table(int n)
{
	int c1, c2, r;

	if (n > 0 && n <= 15)
	{
		for (c1 = 0; c1 <= n; c1++)
		{
			for (c2 = 0; c2 <= n; c2++)
			{
				r = c1 * c2;
				if (c2 == 0)
				{
					_putchar(r + '0');
				}
				else if (r < 10)
					_putchar(' '), _putchar(' '), _putchar(' ');
				else if (r >= 10 && r < 100)
					_putchar(' '), _putchar(' '), _putchar(r / 10 + '0');
				else
					_putchar(' '), _putchar(r / 100 + '0'), _putchar((r % 100) / 10 + '0');
				if (c2 != n && c2 != 0)
					_putchar((r % 10) + '0'), _putchar(',');
			}
			_putchar((r % 10) + '0');
			_putchar('\n');
		}
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
