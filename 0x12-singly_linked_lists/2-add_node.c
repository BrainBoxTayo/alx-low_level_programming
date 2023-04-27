#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
  * add_node - adds elements to a list
  * @head: pointer to a pointer to a list_t list
  * @str: string to be put into str 
  * Return: number of nodes
  */

list_t *add_node(list_t **head, const char *str)
{
	char *str_n;
	int length;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if(newnode == NULL)
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
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
