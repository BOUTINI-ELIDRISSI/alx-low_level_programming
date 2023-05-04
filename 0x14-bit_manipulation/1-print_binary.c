#include "main.h"

/**
 * print_binary - prints
 * @n: number value
 */
void print_binary(unsigned long int n)
{
	int rakam, kadar = 0;
	unsigned long int ct;

	for (rakam = 63; rakam >= 0; rakam--)
	{
		ct = n >> rakam;
		if (ct & 1)
		{
			_putchar('1');
			kadar++;
		}
		else if (kadar)
		{
			_putchar('0');
		}
	}
	if (!kadar)
	{
		_putchar('0');
	}
}
