#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n, m, p;
	dog_t *d;

	d = malloc(sizeof(*d));
	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}
	for (m = 0; name[m]; m++)
		;
	for (p = 0; owner[p]; p++)
		;
	d->name = malloc(m * sizeof(d->name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (n = 0; n <= m; n++)
	{
		d->name[n] = name[n];
	}
	d->age = age;
	d->owner = malloc(p * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (n = 0; n <= p; n++)
	{
		d->owner[n] = owner[n];
	}
	return (d);
}
