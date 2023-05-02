#include "lists.h"

/**
 * free_listint_safe - frees
 * @h: pointer
 * Return: number
 */
size_t free_listint_safe(listint_t **h)
{
	size_t kam = 0;
	int bachka;
	listint_t *chigan;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		bachka = *h - (*h)->next;
		if (bachka > 0)
		{
			chigan = (*h)->next;
			free(*h);
			*h = chigan;
			kam++;
		}
		else
		{
			free(*h);
			*h = NULL;
			kam++;
			break;
		}
	}
	*h = NULL;
	return (kam);
}
