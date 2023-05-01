#include"lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to head node
  * @idx: where the new node should be added
  * @n: data
  * Return: pointer to node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = get_nodeint_at_index(*head, idx);
	listint_t *newnode = malloc(sizeof(listint_t));

	if (node)
	{
		newnode->n = n;
		newnode->next = node;
		node = get_nodeint_at_index(*head, (idx - 1));
		node->next = newnode;
		return (newnode);
	}
	return (NULL);
}
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
		if (count <= index)
		{
			node = node->next;
			count++;
			if (count == index)
				return (node);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
