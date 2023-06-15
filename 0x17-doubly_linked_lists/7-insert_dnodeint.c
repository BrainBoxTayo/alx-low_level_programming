#include"lists.h"
/**
  * get_dnodeint_at_index - gets the nth node of a linked list
  * @head: head of linked list
  * @index: the index of node to be gotten
  * Return: node / NULL if it does not exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = dlistint_len(head);
	size_t i;
	dlistint_t *node = head;

	if (index >= len)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		node = node->next;
	}
	return (node);
}
/**
  * dlistint_len - returns number of elements in a linked list
  * @h: pointer to head of linked list
  * Return: Number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t i = 0;

	node = h;
	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}
/**
  * insert_dnodeint_at_index -  inserts a new node at a given position.
  * @h: pointer to a pointer to the header of first node
  * @idx: index
  * @n: n value
  * Return: the address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *nodeA;

	if (h == NULL)
		return (NULL);
	nodeA = malloc(sizeof(dlistint_t));
	if (nodeA == NULL)
		return (NULL);
	nodeA->n = n;
	if (idx == 0)
	{
		nodeA->prev = NULL;
		nodeA->next = *h;
		if (*h != NULL)
			(*h)->prev = nodeA;
		*h = nodeA;
	}
	else
	{
		node = get_dnodeint_at_index(*h, idx - 1);
		if (node == NULL)
		{
			free(nodeA);
			return (NULL);
		}
		nodeA->prev = node;
		nodeA->next = node->next;
		if (node->next != NULL)
			node->next->prev = nodeA;
		node->next = nodeA;
	}
	return (nodeA);
}
