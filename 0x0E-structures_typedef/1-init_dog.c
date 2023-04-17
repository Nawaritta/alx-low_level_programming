#include "dog.h"
#include <stdio.h>
/**
 *init_dog - initializes a variable of type struct dog
 *@d: pointer to dog struct
 *@name: name initialized with
 *@age: age initialized with
 *@owner: owner initialized with
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
