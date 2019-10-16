#include<stdlib.h>
/**
 *_strdup - copy a string
 *@str: string to copy
 *Return: p
 */

char *_strdup(char *str)
{
	char *p;
	int i, b;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; ++i)
		;
	p = malloc(sizeof(*str) * (i + 1));
	if (p == NULL)
		return (NULL);
	for (b = 0; b <= i; b++)
	{
		p[b] = str[b];
	}
	return (p);
}
