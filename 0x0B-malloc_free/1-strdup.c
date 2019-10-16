#include<stdlib.h>
char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 1; str[i] != '\0'; i++)
		;
	p = malloc(sizeof(*str * i));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
