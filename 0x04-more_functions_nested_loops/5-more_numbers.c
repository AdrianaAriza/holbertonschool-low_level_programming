#include"holberton.h"
/**
 *more_numbers - morenumbers
 *
 *Return: void
 */

void more_numbers(void)
{
	int i, b;

	for (i = 0; i < 14; i++)
	{
		for (b = 0; b <= 14; b++)
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
