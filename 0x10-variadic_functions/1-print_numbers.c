#include<stdarg.h>
#include<stdio.h>
/**
 *print_numbers - print numbers
 *@separator: separator
 *@n: number of arguments
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list valist;

	va_start(valist, n);
	if (n == 0)
		return;
	for (; i < (n - 1); i++)
		if (!separator)
			printf("%i", va_arg(valist, int));
		else
			printf("%i%s", va_arg(valist, int), separator);
	printf("%i\n", va_arg(valist, int));
	va_end(valist);
}
