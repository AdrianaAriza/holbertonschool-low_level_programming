#include "search_algos.h"
/**
 *linear_search - linear_search algo
 *@array: Array
 *@size: Array size
 *@value: value to find
 *Return: int where teh value is
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0, f = 0;

	if (!array)
		return (-1);
	while (i < (int)size && f == 0)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			f = 1;
			return (i);
		}
		i++;
	}
		return (-1);
}
