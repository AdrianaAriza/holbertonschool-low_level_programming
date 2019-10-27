#include<stdio.h>
#include<stdarg.h>
/**
 *print_strings - print string
 *@separator: seprator
 *@n: number of parameters
 *Retrurn: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list valist;
	char *aux;

	va_start(valist, n);
	if (n == 0)
	{
		printf("\n");
		va_end(valist);
		return;
	}
	for (; i < (n - 1); i++)
	{
		aux = va_arg(valist, char *);
		if (aux)
		{
			if (separator)
				printf("%s%s", aux, separator);
			else
				printf("%s", aux);
		}
		else
		{
			if (separator)
				printf("%p%s", aux, separator);
			else
				printf("%s", aux);
		}
		printf("%s\n", va_arg(valist, char *));
		va_end(valist);
	}
}
