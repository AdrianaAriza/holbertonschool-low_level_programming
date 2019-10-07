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

	p = s;
	while (s[i] != c)
	{
		i++;
	}
	return (p + i);
}

