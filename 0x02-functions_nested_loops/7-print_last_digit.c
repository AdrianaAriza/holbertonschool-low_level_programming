#include"holberton.h"

/**
 *print_last_digit - print las digit of a number.
 *@n: number to fin last digit
 *Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
	{
		m = -m;
	}
	_putchar(m + '0');
	return (m);
}

