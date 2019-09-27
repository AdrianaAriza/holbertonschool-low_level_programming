#include"holberton.h"
/**
 *print_triangle - print triangle#
 *@size: size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	int i, a, b;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (a = 0; a < (size - i); a++)
			{
				_putchar(' ');
			}
			for (b = (size - i); b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
