#include"holberton.h"
/**
 *_islower - said if the char is upper case o lower case
 *@c: the number to be process
 *Return: 1 if lower case
 */

int _islower(int c)
{
	if (c > 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
