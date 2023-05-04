#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number
 * @index: int value
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int kimat;

	if (index > 63)
	{
		return (-1);
	}
	kimat = (n >> index) & 1;
	return (kimat);
}
