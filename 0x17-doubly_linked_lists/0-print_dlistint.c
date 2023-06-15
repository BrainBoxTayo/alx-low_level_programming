#include"lists.h"
/**
  * print_dlistint - prints all the elements of a dlistint_t list
  * @h: pointer to header of list to be printed
  * Return: Number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	int i = 0;

	node = h;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		i++;
	}
	return (i);
}
