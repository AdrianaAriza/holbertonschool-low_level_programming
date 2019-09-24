#include"holberton.h"

/**
 *_abs - computes absolute value of an integer
 *@c: this is the number to process
 *Return: i retunrs the absolute volue of the int;
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
