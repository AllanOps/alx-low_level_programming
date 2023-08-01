#include "lists.h"

/**
 * *reverse_listint - Reversal of a list
 * @head: The headernode
 * Return: Pointer to the first node of a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = *head;

	while (new != NULL)
	{
		new = new-> next;
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
		*head = old;
	}

	return (*head);
}
