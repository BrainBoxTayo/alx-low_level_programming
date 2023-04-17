#include"dog.h"
#include<stdlib.h>
/**
  * free_dog - free structs fo type dog
  * @d: dog struct
  * Return: nothing
  */

void free_dog(dog_t *d)
{
	free(d);
}
