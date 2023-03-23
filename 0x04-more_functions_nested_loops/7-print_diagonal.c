#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a straight line in
 * the terminal.
 *
 * @n: is the number as an integer
 *
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j < i + 1 ; j++)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
