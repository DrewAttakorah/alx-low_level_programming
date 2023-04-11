#include "main.h"

/**
 * _abs - is a function
 * @n: char to be checked
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	if (n == 0)
	{
		return (0);
	}
	return (0);
}
