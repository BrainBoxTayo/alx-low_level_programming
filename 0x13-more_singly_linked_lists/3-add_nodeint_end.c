#include"lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: pointer to a node
  * @n: new node int n value
  * Return: adress od the new element or NULL if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *currnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		currnode = *head;
		while (currnode->next != NULL)
		{
			currnode = currnode->next;
		}
		currnode->next = newnode;
	}
	return (newnode);
}
