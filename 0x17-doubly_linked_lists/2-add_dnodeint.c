#include"lists.h"
/**
  * add_dnodeint - adds a node to the beginning of the list
  * @head: head of the linked list
  * @n: value to be stored in the linked list
  * Return: adress of the new element/ NULL on failure
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
