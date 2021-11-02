#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: ID of the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->owner == NULL || d->age == 0)
	{
		printf("NULL");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
