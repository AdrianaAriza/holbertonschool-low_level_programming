#include"holberton.h"
/**
 *puts2 - prints every other character
 *@str: string
 *Return: void
 */

void puts2(char *str)
{
	int i = 0, b = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i = i - 2)
	{
		_putchar(str[b]);
		b = b + 2;
	}
	_putchar('\n');
}
