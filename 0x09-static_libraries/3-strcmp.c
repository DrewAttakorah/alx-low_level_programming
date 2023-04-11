#include "main.h"

/**
 * _strcmp - check the code
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
