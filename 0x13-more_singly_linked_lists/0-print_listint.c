#include "lists.h"

/**
 * print_listint - prints list.h
 * @h: linked list
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nemuro = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nemuro++;
		h = h->next;
	}
	return (nemuro);
}
