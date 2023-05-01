#include"lists.h"
/**
  * pop_listint - deletes the head node of a list
  * @head: pointer to the head node
  * Return: head node's data(n)
  */
int pop_listint(listint_t **head)
{
	int n_store;
	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}
	node = (*head)->next;
	n_store = (*head)->n;
	free(*head);
	(*head) = node;
	return (n_store);
}
