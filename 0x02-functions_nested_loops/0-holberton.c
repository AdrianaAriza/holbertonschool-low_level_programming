#include"holberton.h"

/**
 *main - print text _putchar
 *
 *Return: 0;
 */

int main(void)
{
	char p[] = "Holberton";
	int c = 0;

	while (p[c] != '\0')
	{
		_putchar(p[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}
