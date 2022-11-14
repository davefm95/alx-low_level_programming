#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - initialize a variable of type struct dog
 *@d: pointer to memory block that holds struct dog type
 *@name: name variable
 *@age: dogs age variable
 *@owner: owners name variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
