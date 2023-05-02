#include "lists.h"

/**
 * listint_len - returns the lists
 * @h: linked
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nemuro = 0;

	while (h)
	{
		nemuro++;
		h = h->next;
	}
	return (nemuro);
}
