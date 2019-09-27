#include"holberton.h"
/**
 *print_number - prints int
 *@n: number to be printed
 *Return: void
 */
void print_number(int n)
{
	int div = 1000000000, l = 10, i = 1, neg;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
	}
	while (n != 0 && (n / div) == 0)
	{
		l = (l - 1);
		div = div / 10;
	}
	for (l = l - 1; l > 0; l--)
	{
		i = i * 10;
	}
	while (i > 0 && n != 0)
	{
		neg = n / i;
		if (neg < 0)
		{
			neg = -neg;
		}
		_putchar(neg + '0');
		n = n % i;
		i = (i / 10);
	}
}
