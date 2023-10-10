#include"dog.h"
/**
 * init_dog - Initializes a struct dog with the given values
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to a character array (dog's name)
 * @age: Age of the dog (float)
 * @owner: Pointer to a character array (owner's name)
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
