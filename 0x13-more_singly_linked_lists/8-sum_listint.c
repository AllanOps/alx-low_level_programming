#include "lists.h"

/**
 * sum_listint - Summation of all data in a list
 * @head: The headnode
 * Return: 0 when the list is empty
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
