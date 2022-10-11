#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog
*
* @d: Struct dog
* @name: Dog's name
*
* @age: Dog's age
*
* @owner: Dog's owner
*
* Return: Void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
