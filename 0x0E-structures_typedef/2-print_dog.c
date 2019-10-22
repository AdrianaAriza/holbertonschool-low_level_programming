#include<stdio.h>
#include"dog.h"
/**
 *print_dog - prints dogs info
 *@d: struct
 *Return: void;
 */
void print_dog(struct dog *d)
{
	if(!d)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %lf\n", d->age);
	printf("Owner: %s\n", d->owner);
}
