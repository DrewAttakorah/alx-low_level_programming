#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointer to a string of binary numbers
 *
 * Return:The converted number, or 0
 * drewattakorah
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, expo;
	int v;

	if (b == NULL)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] != '0' && b[v] != '1')
			return (0);
	}

	for (expo = 1, result = 0, v--; v >= 0; v--, expo *= 2)
	{
		if (b[v] == '1')
			result += expo;
	}
	return (result);
}
