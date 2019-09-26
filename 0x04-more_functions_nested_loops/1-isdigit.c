/**
 *_isdigit - is digit
 *@c: variable to process
 *Return: 1 if c is a digit- 0 otherwise
 */

int _isdigit(int c)
{
	int a;

	if (c >= 48 && c <= 57)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
