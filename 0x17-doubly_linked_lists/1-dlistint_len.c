#include"lists.h"
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
