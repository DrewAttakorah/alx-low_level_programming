#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long number = 612852475143;
	long divisor = 2;
	long large_prime = 0;

	while (number != 1)
	{
		if (number % divisor == 0)
		{
			number = number / divisor;
			large_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", large_prime);
	return (0);
}
