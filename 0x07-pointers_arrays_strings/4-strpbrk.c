/**
 *_strpbrk - search a string
 *@s: string
 *@accept: the string to find
 *Return: p
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;
	int h = 0, i = 0, bandera = 0;

	while (s[h] != '\0' && bandera != 1)
	{
		i = 0;
		while (accept[i] != '\0' && accept[i] != s[h])
		{
			i++;
		}
		if (s[h] == accept[i])
		{
			p = (s + h);
			bandera = 1;
		}
		else
		{
			p = "0";
		}
		h++;
	}
	return (p);
}
