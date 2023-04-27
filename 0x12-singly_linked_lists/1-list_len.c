#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
  * list_len - prints all elements of a list
  * @h: pointer to a list_t list
  * Return: number of nodes
  */

size_t list_len(const list_t *h)
{
	const list_t *currentNode = h;
	size_t count = 0;

	while (currentNode != NULL)
	{
		currentNode = currentNode->next;
		count++;
	}
	return (count);
}
