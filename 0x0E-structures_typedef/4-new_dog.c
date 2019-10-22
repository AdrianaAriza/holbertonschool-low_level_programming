#include<stdlib.h>
#include"dog.h"
/**
 *copy - copy str
 *@str: strint to copy
 *Return: strign copied
 */
char *copy(char *str)
{
	int i  = 0, j;
	char *strcopy;

	for (; str[i] != '\0'; i++)
		;
	strcopy = malloc(sizeof(char) * (i + 1));
	if (!strcopy)
		return (NULL);
	for (j = 0; j <= i; j++)
		strcopy[j] = str[j];
	return (strcopy);
}
/**
 *new_dog - create a new dog
 *@name: name
 *@age: age
 *@owner: owner
 * Return: dog1;
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *nameaux;
	char *owneraux;

	dog1 = malloc(sizeof(dog_t));
	if (!dog1)
		return (NULL);
	nameaux = copy(name);
	owneraux = copy(owner);
	if (!nameaux || !owneraux)
	{
		free(nameaux);
		free(ownaux);
		free(dog1);
		return (NULL);
	}
	dog1->name  = nameaux;
	dog1->age  = age;
	dog1->owner  = owneraux;
	return (dog1);
}
