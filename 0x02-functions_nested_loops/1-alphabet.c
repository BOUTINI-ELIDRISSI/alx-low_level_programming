#include "main.h"

/**
 * main - Entry point
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
