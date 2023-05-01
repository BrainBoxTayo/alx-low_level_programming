#include"lists.h"
/**
  * get_nodeint_at_index -  gets the nth node of a listint_t linked list
  * @head: head of list
  * @index: nth index
  * Return: returns the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	node = head;
	while (node != NULL)
	{
		node = node->next;
		count++;
		if (count == index)
			return (node);
	}
	return (NULL);
}
