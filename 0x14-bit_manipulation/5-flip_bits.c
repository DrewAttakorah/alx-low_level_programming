#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @j: second number to convert to
 * Return: number of bits that was needed to flip
 * drew attakorah
 */
unsigned int flip_bits(unsigned long int n, unsigned long int j)
{
	unsigned long int i;
	int j;

	i = n ^ j;
	j = 0;

	while (i)
	{
		j++;
		i &= (i - 1);
	}

	return (j);
}
