#include "dog.h"
#include <stdio.h>

/**
 * print_dog - the function that prints a struct dog
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: This function prints a struct dog on the terminal
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age >= 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
