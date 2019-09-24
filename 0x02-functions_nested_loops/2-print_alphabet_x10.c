#include"holberton.h"

/**
 *print_alphabet_x10 - print 10 times the alphabet
 *
 *return: void;
 */

void print_alphabet_x10(void)
{
	int a, b = 'a';

	a = 0;
	while (a < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
