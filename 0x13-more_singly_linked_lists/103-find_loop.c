#include "lists.h"

/**
 * find_listint_loop - finds the lop.
 * @head: linked
 * Return: address of the node or null.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *yavach = head;
	listint_t *shabok = head;

	if (!head)
		return (NULL);
	while (yavach && shabok && shabok->next)
	{
		shabok = shabok->next->next;
		yavach = yavach->next;
		if (shabok == yavach)
		{
			yavach = head;
			while (yavach != shabok)
			{
				yavach = yavach->next;
				shabok = shabok->next;
			}
			return (shabok);
		}
	}
	return (NULL);
}
