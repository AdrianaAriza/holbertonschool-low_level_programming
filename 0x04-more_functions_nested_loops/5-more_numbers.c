#include"holberton.h"
/**
 *more_numbers - morenumbers
 *
 *Return: void
 */

void more_numbers(void)
{
	for (int i = 0; i < 14; i++)
	{
		for (int i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
