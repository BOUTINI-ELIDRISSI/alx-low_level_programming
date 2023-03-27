#include "main.h"

/**
 * swap_int -  function that swaps the values of
 * two integers.
 *
 * @a: input
 * @b: input
 *
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
