#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in
 * the terminal.
 *
 * @n: is the number as an integer
 *
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
