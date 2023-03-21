#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Show numbers to 98
 *
 * @n: input number as an integer
 *
 * Return: no return
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
				printf("\n");
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
				printf("\n");
		}
	}
}
