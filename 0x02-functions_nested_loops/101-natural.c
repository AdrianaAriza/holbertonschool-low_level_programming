#include"holberton.h"
/**
 *main - x3 x5
 *
 *Return: 0
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			if (a <= 9)
				_putchar(a + '0');
			else if (a >= 10 && a < 100)
				_putchar((a / 10) + '0'), _putchar((a % 10) + '0');
			else if (a >= 100 && a < 1000)
			{
				_putchar((a / 100) + '0');
				_putchar((a / 10) % 10 + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar((a / 1000) + '0');
				_putchar(((a / 100) % 10) + '0');
				_putchar(((a / 10) % 10) + '0');
				_putchar((a % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		a++;
	}
}
