#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big endian, 1 for little endian
 * drew attakorah
 */

int get_endianness(void)
{
	unsigned int g = 1;
	char *c = (char *) &g;

	return (*c);
}