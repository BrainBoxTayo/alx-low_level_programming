#include"dog.h"
/**
  * init_dog - initializes a struct of type dog
  * @d: struct to be initialized
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
