#include "dog.h"
/**
 * init_dog - struct data dog
 * @d: adress of storage data
 * @name: name of the dog
 * @age: age the dog
 * @owner: owner the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return;
}
