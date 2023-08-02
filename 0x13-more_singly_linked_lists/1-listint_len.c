#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: Pointer to the list
 * Return: Number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
