#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of the list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_ *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
