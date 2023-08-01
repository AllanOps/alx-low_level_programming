#include "lists.h"

/**
 * free_listint2 - Freeing listint_t list
 * @head: The header node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *a;
	
	if (head == NULL)
	{
		return;
	}

	for (; *head != NULL;)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
	head = NULL;
}

