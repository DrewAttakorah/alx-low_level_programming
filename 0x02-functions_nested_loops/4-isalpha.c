#include "main.h"
/**
 *_isalpha -Check ifcharacter is alphabet.
 *@c: type int character
 *Return: 1 if letter, lowercase or uppercase, and return 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c > 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
