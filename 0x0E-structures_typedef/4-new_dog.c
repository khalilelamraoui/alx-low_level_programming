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
	int name_len = 0, owner_len = 0;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL && name == NULL && owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;
	new_dog->name = malloc(name_len + 1);
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;

	return (new_dog);
}
