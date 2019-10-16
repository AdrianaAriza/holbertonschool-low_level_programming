#include<stdlib.h>
#include<stdio.h>
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
