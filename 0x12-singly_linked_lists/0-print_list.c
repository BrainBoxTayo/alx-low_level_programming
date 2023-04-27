#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
  * print_list - prints all elements of a list
  * @h: pointer to a list_t list
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	const list_t *currentNode = h;
	size_t count = 0;

	while (currentNode != NULL)
	{
		if (currentNode->str == NULL)
		{
			printf("[0] [nil]\n");
		}
		else
		{
			printf("[%d] %s\n", currentNode->len, currentNode->str);
		}
		currentNode = currentNode->next;
		count++;
	}
	return (count);
}
