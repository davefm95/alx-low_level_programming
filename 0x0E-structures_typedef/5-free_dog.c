#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - frees poinyer to struct dog
 *@d: dog objext to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
