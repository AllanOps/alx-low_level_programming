#include "lists.h"

/**
 * *add_nodeint_end - Adding a node at the end of a list
 * @head: Head node
 * @n: Input numbers
 * Return: The address of the new element, and NULL on failiure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *t;

	h = malloc(sizeof(listint_t));

	if (h == NULL)
	{
		return (NULL);
	}
	h->next = NULL;
	h->n = n;
	if (*head == NULL)
	{
		return (h);
		*head = h;
	}
	else
	{
		t = *head;
		while (t->next)
		{
			t = t->next;
		}
		t->next = h;
	}
	return (h);
}
