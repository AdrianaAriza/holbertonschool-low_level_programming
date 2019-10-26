#include<stdio.h>
#include<stdarg.h>
/**
 *sum_them_all - sum different amount of parameters
 *@n: number of parameters
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list valist;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
