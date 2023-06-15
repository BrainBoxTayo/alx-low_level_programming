#include"lists.h"
/**
  * sum_dlistint - returns sum of elements in a linked list
  * @head: pointer to head of linked list
  * Return: Number of elements
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int i = 0;

	node = head;
	while (node != NULL)
	{
		i += node->n;
		node = node->next;
	}
	return (i);
}
