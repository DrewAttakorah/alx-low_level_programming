#include "main.h"

/**
 * _strchr - check the code
 *
 * @s: param1
 * @c: param2
 * Return: pointer.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
