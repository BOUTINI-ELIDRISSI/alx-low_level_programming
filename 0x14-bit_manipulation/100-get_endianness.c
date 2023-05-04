#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 (big) or 1 (little)
 */
int get_endianness(void)
{
	unsigned int rakam = 1;
	char *kimat = (char *) &rakam;

	return (*kimat);
}
