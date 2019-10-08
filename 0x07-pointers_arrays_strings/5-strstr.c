#include<stdio.h>
/**
 *_strstr - find a string
 *@haystack: the string
 *@needle: string to find
 *Return: p
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, cont = 0, h = 0;

	while (needle[h] != '\0')
	{
		h++;
	}
	if (h == 0)
	{
		return (haystack);
	}
	for (; i <= h; i++)
	{
		for (; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				cont = j;
				for (; needle[i] != '\0' && needle[i] == haystack[j]; i++)
					j++;
				if (needle[i] == '\0')
					return (haystack + cont);
			}
		}
	}
	return (0);
}
