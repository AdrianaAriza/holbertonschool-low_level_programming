#include"holberton.h"

/**
 *_isalpha - determines if the char is a letter
 *
 *return: 1 is letter 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
