#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Find if a number is positive, negative or 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (n >= 0)
	{
		printf("Last digit of %i is %i and is geater than %i\n", n, r, r - 1);
	}
	else
	{
		printf("Last digit of %i is %i and is greater than %i\n", n, -r, -r - 1);
	}
	return (0);
}
