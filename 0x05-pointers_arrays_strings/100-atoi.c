/**
 *_atoi - char to int
 *@s: the string
 *Return: int
 */

int _atoi(char *s)
{
	int i = 0, mcont = 0, n = 0, ncont = 1;

	while (s[i] != '\0' && s[i] != ';')
	{
		if (s[i] == '-')
		{
			mcont++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = ((n * ncont) + s[i] - '0');
			ncont = 10;
		}
		i++;

	}
	if (mcont % 2 != 0)
	{
		n = -n;
	}
	return (n);
}
