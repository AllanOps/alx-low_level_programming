#include "lists.h"
/**
 * free_listint - Frees listint_t list
 * @head: Header node
 * Return: 0, on success
 */
void  free_listint(listint_t *head)
{
	listint_t *a;
	while (head)
	{
		a = head;
		head = head->next;
		free(a);
	}
	free(head);
}
