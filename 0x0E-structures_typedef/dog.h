#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog
 * @name: Dog's name
 * @age: Age
 * @owner: Name of the owner
 *
 * Description: Information about the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

