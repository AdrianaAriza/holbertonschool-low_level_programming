/**
 *rot13 - string to rot13
 *@s: string
 *Return: s
 */
char *rot13(char *s)
{
	int i = 0, j = 0;

	for (; s[j] != '\0'; j++)
	{
		i = j;
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if  ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				s[j] = s[j] + 13;
			}
			else
			{
				s[i] = s[i] - 13;
			}
			i++;
			j++;
		}
	}
	return (s);
}
