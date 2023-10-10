#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to a character array (dog's name)
 * @age: Age of the dog (float)
 * @owner: Pointer to a character array (owner's name)
 *
 * Description: This structure stores information about
 * a dog, including its name,
 * age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
