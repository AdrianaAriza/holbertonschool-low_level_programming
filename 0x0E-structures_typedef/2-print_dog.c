#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints dogs info
 *@d: struct
 *Return: void;
 */
void print_dog(struct dog *d)
{
	if (d->name)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (d->age)
	{
		printf("Age: %lf\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	if (d->owner)
	{
		printf("Owner: %s\n", d->owner);

	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
