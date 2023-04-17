#include<stdlib.h>
#include"dog.h"
/**
  * new_dog - creates a new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: pointer to new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *namestore = name;
	char *ownerstore = owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = namestore;
	newdog->age = age;
	newdog->owner = ownerstore;
	return (newdog);
}
