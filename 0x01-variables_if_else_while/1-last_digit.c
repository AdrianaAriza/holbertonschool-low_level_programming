#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int r;
			
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		r = n%10;
		printf("Last digit of %i is %i \n" ,n,r);
	}
	else
	{
		r = -n%10;
		printf("Last digit of %i is %i \n" ,n,r);
	}
	return (0);
}
