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
	listint_t *new_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int count = 0;

	if (idx > listint_len(*head) || *head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (head != NULL)
	{
		if ((count + 1) == idx)
			previous_node = *head;
		else if (count == idx)
		{
			if (count == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = previous_node->next;
			previous_node->next = new_node;
			return (new_node);
		}
		head = &((*head)->next);
		count++;
	}
	return (NULL);
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
