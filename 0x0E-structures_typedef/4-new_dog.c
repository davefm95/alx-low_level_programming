#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - function that creates new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: pointer to new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nudog;

	nudog = malloc(sizeof(dog_t));
	nudog->name = name;
	nudog->age = age;
	nudog->owner = owner;
	return (nudog);
}
