#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that were needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	i = n ^ m;

	while (i)
	{
		count++;
		i &= (i - 1);
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
