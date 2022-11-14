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
	int i, nl = 0, onl = 0;
	char *ncp, *oncp;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[nl])
		nl++;
	while (owner[onl])
		onl++;
	ncp = malloc((nl + 1) * sizeof(char));
	if (ncp == NULL)
		return (NULL);
	oncp = malloc(onl + 1);
	if (oncp == NULL)
	{
		free(ncp);
		return (NULL);
	}
	for (i = 0; i <= nl; i++)
		ncp[i] = name[i];
	for (i = 0; i <= onl; i++)
		oncp[i] = owner[i];
	nudog = malloc(sizeof(dog_t));
	if (nudog == NULL)
	{
		free(ncp);
		free(oncp);
		return (NULL);
	nudog->name = ncp;
	nudog->age = age;
	nudog->owner = oncp;
	return (nudog);
}
