/**
 *_strlen - longitud de un string
 *@s: String
 *Return: cont yhe length of the string
 */

int _strlen(char *s)
{
	int i = 0, cont = 0;

	while (s[i] != '\0')
	{
		cont = cont + 1;
		i++;
	}
	return (cont);
}
