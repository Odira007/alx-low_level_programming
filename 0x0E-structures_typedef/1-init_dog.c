#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a var ot type struct dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: function that initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
