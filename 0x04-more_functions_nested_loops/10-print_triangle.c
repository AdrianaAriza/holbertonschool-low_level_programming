#include"holberton.h"
/**
 * print_line
 *
 */

void print_diagonal(int n)
{
	int cont = 1;
	
	if (n > 0)
	{
		for (int a = 0; a < n; a++)
		{
			for (int i = 1; i < cont; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			cont++;
		}
		_putchar('\n');
	}
}
