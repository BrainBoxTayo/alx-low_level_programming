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

	while (head != NULL)
	{
		if (count <= index)
		{
			if (count == index)
			{
				node = head;
				break;
			}
			head = head->next;
			count++;
		}
		else
		{
			return (NULL);
		}
	}
	return (node);
}
