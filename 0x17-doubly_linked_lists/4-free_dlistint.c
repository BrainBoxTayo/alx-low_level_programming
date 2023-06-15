#include"lists.h"
/**
  * free_dlistint - frees a list
  * @head: pointer to head of list
  * Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	node = head;
	while (node != NULL)
	{
		free(node);
		node = node->next;
	}
}
