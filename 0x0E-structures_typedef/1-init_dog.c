#include<stdlib.h>
#include"dog.h"
/**
 *init_dog - Create a dog
 *@d: Struct
 *@name: name
 *@age: age
 *@owner: owner
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
