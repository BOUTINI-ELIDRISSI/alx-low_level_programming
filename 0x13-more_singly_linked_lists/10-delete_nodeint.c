#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *chigan = *head;
	listint_t *ct = NULL;
	unsigned int rakam = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(chigan);
		return (1);
	}
	while (rakam < index - 1)
	{
		if (!chigan || !(chigan->next))
			return (-1);
		chigan = chigan->next;
		rakam++;
	}
	ct = chigan->next;
	chigan->next = ct->next;
	free(ct);
	return (1);
}
