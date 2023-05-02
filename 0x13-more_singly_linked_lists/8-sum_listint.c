#include "lists.h"

/**
 * sum_listint - calculates the sum
 * @head: first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int out = 0;
	listint_t *chigan = head;

	while (chigan)
	{
		out += chigan->n;
		chigan = chigan->next;
	}
	return (out);
}
