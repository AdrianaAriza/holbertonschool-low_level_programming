#include"holberton.h"
/**
 *puts_half - print teh half string
 *@str: string
 *Return: void
 */
void puts_half(char *str)
{
	int x = 0, i = 0, m = 0, cont = 0;

	while (str[i] != 0)
	{
		i++;
	}
	m = i / 2;
	for (x = (i % 2 == 0) ? m : m + 1; cont < m; x++)
	{
		cont = cont + 1;
		_putchar(str[x]);
	}
	_putchar('\n');
}

