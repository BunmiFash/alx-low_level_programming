#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - returns length of string
*
* @s: String
*
* Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
* _strcpy - copy string
*
* @dest: Destination string
*
* @src: Source string
*
* Return: String copy
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

/**
* new_dog - creates a new dog object
*
* @name: Dpg's name
*
* @age: Dog's age
*
* @owner: Dog's owner
* Return: New dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	char *name_copy;
	char *owner_copy;

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
	{
		return (NULL);
	}
	dog_new->age = age;
	if (name != NULL)
	{
		name_copy = malloc(_strlen(name) + 1);
		if (name_copy == NULL)
		{
			free(dog_new);
			return (NULL);
		}
		dog_new->name = _strcpy(name_copy, name);
	}
	else
	{
		dog_new->name = NULL;
	}
	if (owner != NULL)
	{
		owner_copy = malloc(_strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(dog_new);
			return (NULL);
		}
		dog_new->owner = _strcpy(owner_copy, owner);
	}
	else
	{
		dog_new->owner == NULL;
	}
	return (dog_new);
}
