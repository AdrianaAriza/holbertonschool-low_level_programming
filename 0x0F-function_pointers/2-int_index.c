#include<stdio.h>
/**
 *int_index - passing eachs element of an array
 *@array: array
 *@size: size
 *@cmp: function
 *Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
