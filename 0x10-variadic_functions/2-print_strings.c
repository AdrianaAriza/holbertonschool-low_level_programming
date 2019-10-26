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

	if (!separator)
		separator = "";
	va_start(valist, n);
	for (; i < (n - 1); i++)
	{
		aux = va_arg(valist, char *);
		if (aux)
			printf("%s%s", aux, separator);
		else
			printf("%p%s", aux, separator);
	}
	printf("%s\n", va_arg(valist, char *));
	va_end(valist);
}
