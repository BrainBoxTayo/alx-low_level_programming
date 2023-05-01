#include"lists.h"
/**
  * sum_listint - adds all the data of a linked list
  * @head: head of the linked list
  * Return: sum of all data
  */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
