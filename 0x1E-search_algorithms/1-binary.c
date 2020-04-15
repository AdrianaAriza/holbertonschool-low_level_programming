#include "search_algos.h"
/**
 *print_array - print-arrays
 *@array: Array
 *@size: Array size
 *Return: void
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
/**
 *binary_search - linear_search algo
 *@array: Array
 *@size: Array size
 *@value: value to find
 *Return: int where teh value is
 */
int binary_search(int *array, size_t size, int value)
{
	size_t med = 0, pos = 0, size_i = 0;

	size_i = size;
	if (!array)
		return (-1);
	while (size)
	{
		print_array(array, size - 1);
		med = (size - 1) / 2;
		if (array[med] == value)
			return (med + pos);
		else if (array[med] > value)
			size = med;
		else
		{
			if (pos < (size_i - 1))
			{
				pos = pos + size - (size / 2);
				array = &array[size - (size / 2)];
			}
			size = size - 1 - med;
		}
	}
	if (array[0] == value)
		return (pos);
	return (-1);
}
