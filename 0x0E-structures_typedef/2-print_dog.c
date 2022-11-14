#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints details of a struct dog
 *@d: pointer to do variable of type struct dog
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
		exit(0);
	printf("Name: %s\n", d->name != NULL ? d->name : nil);
	if (d->age <= 0)
		printf("Age: %s\n", nil);
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : nil);
}
