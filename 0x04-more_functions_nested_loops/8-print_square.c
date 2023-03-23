#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square followed by a
 * new line.
 *
 * @size: is the number as an integer
 *
 * Return: no return.
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
