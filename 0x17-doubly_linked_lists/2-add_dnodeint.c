#include"lists.h"
/**
  * add_dnodeint - adds a node to the beginning of the list
  * @head: head of the linked list
  * @n: value to be stored in the linked list
  * Return: adress of the new element/ NULL on failure
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *h;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
		newNode->next = h;
	}
	if (h != NULL)
		h->prev = newNode;
	*head = newNode;
	return (newNode);
}
