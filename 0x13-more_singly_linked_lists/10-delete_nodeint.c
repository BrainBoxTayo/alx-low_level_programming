#include"lists.h"
/**
  * delete_nodeint_at_index -  deletes the nth node of a listint_t linked list
  * @head: head of list
  * @index: nth index
  * Return: returns the nth node
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *prev_node = NULL;
	unsigned int count = 0, length = listint_len(*head);

	if (length == 0 || (index > length))
		return (-1);
	while (head != NULL)
	{
		if (count == index)
		{
			old_node = *head;
			if (count == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			prev_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((count + 1) == index)
			prev_node = *head;
		head = &((*head)->next);
		count++;
	}
	return (-1);
}
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
