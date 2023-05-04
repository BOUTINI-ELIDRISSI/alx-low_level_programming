#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string value
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	int rakam;
	unsigned int kimat = 0;

	if (!b)
		return (0);
	for (rakam = 0; b[rakam]; rakam++)
	{
		if (b[rakam] < '0' || b[rakam] > '1')
			return (0);
		kimat = 2 * kimat + (b[rakam] - '0');
	}
	return (kimat);
}
