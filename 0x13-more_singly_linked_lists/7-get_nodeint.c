#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head: first node
 * @index: index
 * Return: pointer or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int rakam = 0;
	listint_t *chigan = head;

	while (chigan && rakam < index)
	{
		chigan = chigan->next;
		rakam++;
	}
	return (chigan ? chigan : NULL);
}
