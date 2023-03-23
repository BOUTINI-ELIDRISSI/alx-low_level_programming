#include "main.h"
#include <stdio.h>

/**
 * _print_numbers - prints the numbers, from 0 to 9
 *
 * Return: no return.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
}
