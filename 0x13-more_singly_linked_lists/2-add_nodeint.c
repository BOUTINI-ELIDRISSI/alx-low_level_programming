#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: is pointer
 * @n: data
 * Return: new node or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *yene;

	yene = malloc(sizeof(listint_t));
	if (!yene)
	{
		return (NULL);
	}
	yene->n = n;
	yene->next = *head;
	*head = yene;
	return (yene);
}
