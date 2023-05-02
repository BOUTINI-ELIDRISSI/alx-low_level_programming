#include "lists.h"
#include <stdio.h>

size_t looplenList(const listint_t *h);
size_t print_listint_safe(const listint_t *head);

/**
 * looplenList - Counts the number
 * @h: A pointer to the head of the listint_t to check.
 * Return: 0 or the number of unique nodes in the list.
 */
size_t looplenList(const listint_t *h)
{
	const listint_t *se, *re;
	size_t ns = 1;

	if (h == NULL || h->next == NULL)
		return (0);
	se = h->next;
	re = (h->next)->next;
	while (re)
	{
		if (se == re)
		{
			se = h;
			while (se != re)
			{
				ns++;
				se = se->next;
				re = re->next;
			}
			se = se->next;
			while (se != re)
			{
				ns++;
				se = se->next;
			}
			return (ns);
		}
		se = se->next;
		re = (re->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: pointer
 * Return: number
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ns, rakam = 0;

	ns = looplenList(head);
	if (ns == 0)
	{
		for (; head != NULL; ns++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (rakam = 0; rakam < ns; rakam++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (ns);
}
