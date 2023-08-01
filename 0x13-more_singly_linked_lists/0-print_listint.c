#include "lists.h"
/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to the list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t p = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		p++;
	}

	return (p);
}
