#include "main.h"
#include "dog.h"
/**
 * print_dog - prints a stuct dog
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
		printf("Name: (nil)\nAge: %.6f\nOwner: (nil)\n", d->age);
	else if (d == NULL)
		printf("Name:\nAge:\nOwner:");
	else
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
