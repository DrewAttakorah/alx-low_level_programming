#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: number to print as binary
 * drew attakorah
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int b;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, b = 0; (i >>= 1) > 0; b++)
		;

	while (b >= 0)
	{
		if ((n >> b) & 1)
			printf("1");
		else
			printf("0");
		b--;
	}
}
