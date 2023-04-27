#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
  * add_node_end - adds elements to end of a list
  * @head: pointer to a pointer to a list_t list
  * @str: string to be put into str
  * Return: number of nodes
  */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str_n;
	int length;
	list_t *newnode, *lastnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	str_n = strdup(str);
	if (str_n == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (length = 0; str[length]; length++)
		;
	newnode->str = str_n;
	newnode->len = length;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);
}
