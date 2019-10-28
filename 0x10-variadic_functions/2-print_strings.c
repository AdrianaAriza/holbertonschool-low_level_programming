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

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	for (; i < (n - 1); i++)
	{
		aux = va_arg(valist, char *);
		if (!aux)
			aux = "(nil)";
		if (!separator)
			printf("%s", aux);
		else
			printf("%s%s", aux, separator);
	}
	aux = va_arg(valist, char *);
	if (!aux)
		aux = "(nil)";
	printf("%s\n", aux);
	va_end(valist);
}
