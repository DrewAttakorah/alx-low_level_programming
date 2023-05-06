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
	unsigned int result, exp;
	int w;

	if (b == NULL)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] != '0' && b[v] != '1')
			return (0);
	}

	for (exp = 1, result = 0, v--; v >= 0; v--, exp *= 2)
	{
		if (b[v] == '1')
			result += exp;
	}
	return (result);
}
