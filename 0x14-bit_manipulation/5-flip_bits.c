#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int rakam, katch = 0;
	unsigned long int ct;

	for (rakam = 63; rakam >= 0; rakam--)
	{
		ct = (n ^ m) >> rakam;
		if (ct & 1)
			katch++;
	}
	return (katch);
}
