#include <stdio.h>

/**
* main - causes an infinite loop
*@i: number to be processed
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		break;
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
