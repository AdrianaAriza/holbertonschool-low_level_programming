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
	char *str, *aux = "";

	va_start(valist, format);
	while (format[i])
	{
		aux = "";
		if (i >= 0 && format[i + 1] != '\0')
			aux = ", ";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", (char) va_arg(valist, int), aux);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), aux);
			break;
		case 'f':
			printf("%f%s", (float) va_arg(valist, double), aux);
			break;
		case 's':
			str =  va_arg(valist, char *);
			if (!str)
				printf("%p%s", str, aux);
			else
				printf("%s%s", str, aux);
			break;
		default:
			break;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
