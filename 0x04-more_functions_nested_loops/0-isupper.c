/**
 *_isupper - upper or lower case
 *@c: the character to evaluate
 *Return: 1 if upper - 0 is lower
 */

int _isupper(int c)
{
	int a = 0;

	if (c <= 122 && c >= 97)
	{
		a = 0;
	}
	else if (c >= 65 && c <= 90)
	{
		a = 1;
	}
	return (a);
}
