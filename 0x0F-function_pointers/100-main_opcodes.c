#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 - 1
 */
int main(int argc, char *argv[])
{
	char *main_p;
	int i, size;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	size = atoi(argv[1]);
	if (atoi(argv[1]) < 0)
	{
		puts("Error");
		exit(2);
	}

	main_p = (char *)main;
	for (i = 0; i < size; i++)
	{
		printf("%02hhx", main_p[i]);
		if (i < (size - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
