#include<stdio.h>
/**
 *_strchr - locates a character in a string
 *@s: the string
 *@c: the character to find
 *Return: p - pointer to the charcter found
 */

char *_strchr(char *s, char c)
{
	int i = 1;
	char *p;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == '\0')
	{
		p = NULL;
	}
	else
	{
		p = (s + i);
	}
	return (p);
}

