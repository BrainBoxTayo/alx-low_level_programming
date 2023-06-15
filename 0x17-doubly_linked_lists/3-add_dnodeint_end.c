#include"lists.h"
/**
  * add_dnodeint_end - adds a node at the end of a linked list
  * @head: pointer to head
  * @n: data stored
  * Return: pointer to a linked list node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodeT = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (nodeT == NULL)
	{
		node->prev = nodeT;
		*head = node;
		return (node);
	}
	while (nodeT != NULL)
	{
		if (nodeT->next == NULL)
		{
			node->prev = nodeT;
			(nodeT)->next = node;
			break;
		}
		nodeT = nodeT->next;
	}
	return (node);
}
