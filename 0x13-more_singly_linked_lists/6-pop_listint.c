#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer
 * Return: data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *chigan;
	int nemuro;

	if (!head || !*head)
		return (0);
	nemuro = (*head)->n;
	chigan = (*head)->next;
	free(*head);
	*head = chigan;
	return (nemuro);
}
