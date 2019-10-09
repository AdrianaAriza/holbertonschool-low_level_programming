/**
 *_pow_recursion - pow a number
 *@x: teh number
 *@y: the pow
 *Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, --y));
}
