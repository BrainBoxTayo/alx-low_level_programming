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
	newnode->n = n;
	newnode->next = node;
	node = get_nodeint_at_index(*head, (idx - 1));
	node->next = newnode;
	return (newnode);
}
/**
  * get_nodeint_at_index -  gets the nth node of a listint_t linked list
  * @head: head of list
  * @index: nth index
  * Return: returns the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
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