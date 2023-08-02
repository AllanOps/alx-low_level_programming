#include "lists.h"

/**
 * get_nodeint_at_index - Prints elements of a list
 * @head: The headnode
 * @index: Index node
 * Return: NULL if the node is non-existant
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *z;

	z = head;

	if (head == NULL)
	{
		return (0);
	}
	z = head;

	while (index != 0)
	{
		z = z->next;
		index--;
	}

	if (z == NULL)
	{
		return (0);
	}

	return (z);
}
