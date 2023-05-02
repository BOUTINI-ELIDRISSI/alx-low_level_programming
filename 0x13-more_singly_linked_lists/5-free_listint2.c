#include "lists.h"

/**
 * free_listint2 - frees
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *chigan;

	if (head == NULL)
		return;
	while (*head)
	{
		chigan = (*head)->next;
		free(*head);
		*head = chigan;	
	}
	*head = NULL;
}
