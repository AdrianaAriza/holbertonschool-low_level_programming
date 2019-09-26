#include"holberton.h"
/**
 *print_square - print square
 *@size: number to process
 *Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (int a = 0; a < size; a++)
		{
			for (int i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
