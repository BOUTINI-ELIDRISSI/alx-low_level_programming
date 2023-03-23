#include "main.h"
#include <stdio.h>

/**
 * _isupper - Shows 1 if the input is a
 * uppercase character. Another cases, shows
 * 0
 *
 * @c: The input number ad an integer
 *
 * Return: 1 for uppercase character. 0 for the rest.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
