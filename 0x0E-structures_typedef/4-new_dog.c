#include<stdlib.h>
#include"dog.h"
/**
 *new_dog - create a new dog
 *@name: name
 *@age: age
 *@owner: owner
 Return: dog created dog1;
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	dog1 = malloc(sizeof(dog_t));
	if(!dog1)
		return NULL;
	dog1->name  = name;
	dog1->age  = age;
	dog1->owner  = owner;
	return (dog1);
}
