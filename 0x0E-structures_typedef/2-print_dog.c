#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
 *print_dog - prints a structure
 *@d: pointer to a structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);

		if (d->age >= -FLT_MAX && d->age <= FLT_MAX)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %1f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");
	}
}
