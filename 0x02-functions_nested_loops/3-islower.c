#include"holberton.h"
/**
 *int _islower - said if the char is upper case o lower case
 *
 *return 1 if lower case
 */

int _islower(int c)
{
	if(c > 'Z'){
		return (1);
	}
	else
	{
		return (0);
	}
}
