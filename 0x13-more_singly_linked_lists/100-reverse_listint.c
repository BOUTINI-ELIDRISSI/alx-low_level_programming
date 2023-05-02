#include "lists.h"

/**
 * reverse_listint - reverses
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *y = NULL;
	listint_t *z = NULL;

	while (*head)
	{
		z = (*head)->z;
		(*head)->z = y;
		y = *head;
		*head = z;
	}
	*head = y;
	return (*head);
}
