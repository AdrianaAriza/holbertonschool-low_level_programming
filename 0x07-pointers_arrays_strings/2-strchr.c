#include<stdio.h>
/**
 *_strchr - locates a character in a string
 *@s: the string
 *@c: the character to find
 *Return: p - pointer to the charcter found
 */

char *_strchr(char *s, char c)
{
	int i = 0, j = 0, band = 0;
	char *p;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; j <= i && band != 1; j++)
	{
		if (s[j] == c)
		{
			p = (s + j);
			band = 1;
		}
	}
	if (band == 0)
	{
		p = NULL;
	}
	return (p);
}
