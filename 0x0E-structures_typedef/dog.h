#ifndef DOG_H
#define DOG_H

/**
* dog -typedef for structure dog
*/

typedef struct dog dog_t;

/**
* struct dog - Dog data type
*
* @name: Dog's name
*
* @age: Dog's age
*
* @owner: Dog's owner
*
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
