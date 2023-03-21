#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		_putchar(var);
	}
	_putchar('\n');
}
