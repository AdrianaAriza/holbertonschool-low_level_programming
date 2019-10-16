#include<stdlib.h>
/**
 *alloc_grid - allocate a grid
 *@width: width
 *@height: height
 *Return: p
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	p = malloc(sizeof(int *) * height + 1);
	if (p == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * (width + 1));
		if (p[i] == NULL)
			return (NULL);
	}
	p[i] = NULL;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
