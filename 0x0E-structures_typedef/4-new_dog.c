#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog
 * @name: Pointer to a character array (dog's name)
 * @age: Age of the dog (float)
 * @owner: Pointer to a character array (owner's name)
 *
 * Return: Pointer to the new dog (struct dog)
 * or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = owner;
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
