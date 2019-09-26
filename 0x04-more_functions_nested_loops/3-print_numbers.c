#include"holberton.h"
/**
 *print_numbers - print numbers from 0-9
 *
 *Return: No return;
 */

void print_numbers(void)
{
	for (int a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
