#include"lists.h"
/**
  * print_listint - prints elements of a listint_t list
  * @h: head of list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node;

	node = h;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
