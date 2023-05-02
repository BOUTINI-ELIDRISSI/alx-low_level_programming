#include "lists.h"

/**
 * insert_nodeint_at_index - a new node
 * @head: pointer
 * @idx: index
 * @n: data
 * Return: pointer or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int rakam;
	listint_t *yene;
	listint_t *chigan = *head;

	yene = malloc(sizeof(listint_t));
	if (!yene || !head)
		return (NULL);
	yene->n = n;
	yene->next = NULL;
	if (idx == 0)
	{
		yene->next = *head;
		*head = yene;
		return (yene);
	}
	for (rakam = 0; chigan && rakam < idx; rakam++)
	{
		if (rakam == idx - 1)
		{
			rakam->next = temp->next;
			chigan->next = yene;
			return (yene);
		}
		else
			chigan = chigan->next;
	}
	return (NULL);
}
