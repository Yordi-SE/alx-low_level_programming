#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog *my_dog;
    struct dog dogg;
    char *c = "cccaa";
    my_dog = &dogg;

    init_dog(my_dog, c, 3.5, NULL);
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
