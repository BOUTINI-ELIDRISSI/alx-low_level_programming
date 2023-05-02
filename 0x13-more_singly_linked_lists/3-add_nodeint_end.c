#include "lists.h"

/**
 * add_nodeint_end - adds a node
 * @head: pointer
 * @n: data
 * Return: pointer or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *yene;
	listint_t *chigan = *head;

	yene = malloc(sizeof(listint_t));
	if (!yene)
		return (NULL);
	yene->n = n;
	yene->next = NULL;
	if (*head == NULL)
	{
		*head = yene;
		return (yene);
	}
	while (chigan->next)
		chigan = chigan->next;
	chigan->next = yene;
	return (yene);
}
