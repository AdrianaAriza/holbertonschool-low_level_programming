/**
 *_strlen_recursion - length of string
 *@s: string
 *Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}