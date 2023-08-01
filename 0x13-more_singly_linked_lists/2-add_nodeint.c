#include "lists.h"

/**
 * *add_nodeint - Adds a new node at the start of the list
 * @head: Head node
 * @n: Input numbers
 * Return: Address of new element, and NULL on failiure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x = malloc(sizeof(listint_t));
	if (!head || !x)
	{
		return (NULL);
	}
	x->n = n;
	x->next = NULL;
	if (*head)
	{
		x->next = *head;
	}
	*head = x;
	return (x);
}
