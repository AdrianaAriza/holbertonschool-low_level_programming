#include<stdio.h>


int main(void)
{
	long long int numero = 612852475143, nf, np;

	for (nf = 2; nf < numero; nf++)
	{
		if ((numero % nf) == 0)
		{
			for (np = 2; np <= nf; np++)
			{
				if (np != nf && (nf % np) == 0)
				{
					break;
				}
				else if (np == nf)
				{
					printf("casa %lld", nf);
				}
			}
		}
	}
	return(0);
}
