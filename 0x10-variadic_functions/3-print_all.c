#include<stdarg.h>
#include<stdio.h>
/**
 *print_all - print all
 *@format: formats to print
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list valist;

	va_start(valist, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(valist, double));
			break;
		case 's':
			printf("%s", va_arg(valist, char *));
			break;
		}
		if (format[i + 1] && i > 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
