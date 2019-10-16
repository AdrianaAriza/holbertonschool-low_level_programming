#include<stdlib.h>
/**
 *slen - length of string
 *@s: string to measure
 *Return: int
 */
int slen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	return (i);
}
/**
 *str_concat - concatenate two strings
 *@s1: 1 stting
 *@s2: 2 string
 *Return: p
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int b, n, c = 0;

	n = slen(s1) + slen(s2) + 1;

	p = malloc(sizeof(*p) * n);
	if (p == NULL)
		return (NULL);
	for (b = 0; s1[b] != '\0'; b++)
	{
		p[b] = s1[b];
	}
	for (; b <= n; b++)
	{
		p[b] = s2[c];
		c++;
	}
	return (p);
}
