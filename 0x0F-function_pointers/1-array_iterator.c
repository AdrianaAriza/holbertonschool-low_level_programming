#include<stdio.h>
/**
 *array_iterator - passing eachs element of an array
 *@array: array
 *@size: size
 *@action: function
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
