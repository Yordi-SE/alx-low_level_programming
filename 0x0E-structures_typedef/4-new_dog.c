#include "main.h"
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;

	dog_t *new = &new_dog;

	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;
	if (new == NULL || new_dog.name == NULL)
		return (NULL);
	else if (new_dog.owner == NULL)
		return (NULL);
	return (new);
}
