#include"holberton.h"

/**
 *print_alphabet - write the alphabet from a-z.
 *
 *
 *return: void
 */

void print_alphabet(void)
{
	int o = 'a';

	while (o <= 'z')
	{
		_putchar(o);
		o++;
	}
	_putchar('\n');
}
