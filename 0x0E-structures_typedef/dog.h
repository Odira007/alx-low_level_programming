#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a new type
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: define a new type struct dog with the elements provided
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
