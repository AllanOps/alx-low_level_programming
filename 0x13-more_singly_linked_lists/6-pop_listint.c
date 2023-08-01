#include "lists.h"
/**
 * pop_listint - Deletion of a headnode of a list
 * @head: Head node
 * Return: The headnode and 0 when the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int x;

	if (*head == NULL)
	{
		return (0);
	}

	x = (*head)->n;
	a = (*head);
	(*head) = (*head)->next;
	free(a);
	
	return (x);
}
