#include "dog.h"
/**
 * _strlen - function that returns the length of a string
 * @s: data
 * Return: a
 */
int _strlen(char *s)
{
	int a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);
}
/**
 * _strcpy - function that copies the string pointed to by
 * @dest: data
 * @src: data
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = src[a];
	return (dest);
}
/**
 * new_dog - ID dog
 * @name: new name dog
 * @age: new age of the dog
 * @owner: new owner of the dog
 * Return: data of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	dog_t *dogshow;

	dogshow = malloc(sizeof(dog_t));
	if (dogshow == NULL)
	{
		return (NULL);
	}
	dogshow->age = age;
	if (name != NULL)
	{
		new_name = malloc(sizeof(char) * _strlen(name) + 1);
		if (new_name == NULL)
		{
			free(dogshow);
			return (NULL);
		}
		dogshow->name = _strcpy(new_name, name);
	}
	else
	{
		dogshow->name = NULL;
	}
	if (owner != NULL)
	{
		new_owner = malloc(sizeof(char) * _strlen(owner) + 1);
		if (new_owner == NULL)
		{
			free(new_name);
			free(dogshow);
			return (NULL);
		}
		dogshow->owner = _strcpy(new_owner, owner);
	}
	else
	{
		dogshow->owner = NULL;
	}
	return (dogshow);
}
