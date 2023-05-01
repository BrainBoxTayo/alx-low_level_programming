#include"lists.h"
/**
  * listint_len - returns the number of elements in a list
  * @h: head
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}
