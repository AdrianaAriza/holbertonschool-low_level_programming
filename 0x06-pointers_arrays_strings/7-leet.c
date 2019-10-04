/**
 *leet - swap letters for numbers
 *@s: the string
 *Return: s
 */
char *leet(char *s)
{
	char v[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char n[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int x = 0, y;

	for (; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == v[y])
			{
				s[x] = n[y];
			}
		}
	}
	return (s);
}
