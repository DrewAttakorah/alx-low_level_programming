#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercase using '_putchar'
 * Return: 0 Always
 */
void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');

}
