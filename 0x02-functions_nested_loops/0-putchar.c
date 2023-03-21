#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var[8] = "_putchar";
	int i;

	for (i=0; i < 8; i++)
	{
		putchar(var[i]);
	}
	putchar('\n');
	return (0);
}
