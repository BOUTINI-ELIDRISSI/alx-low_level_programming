#include "lists.h"

/**
 * free_listint - frees
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *chigan;

	while (head)
	{
		chigan = head->next;
		free(head);
		head = chigan;
	}
}
