#include <stdlib.h>
/**
 *create_array - creates an array
 *@size: size of array
 *@c: char to fill the array with
 *Return: p
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	for (; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
