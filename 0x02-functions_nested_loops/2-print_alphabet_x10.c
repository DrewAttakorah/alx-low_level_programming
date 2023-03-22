#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x in lowercase
 * REturn: 0
 */
void print_alphabet_10x(void)
{
	int i = 0;
	char s;

	while (i < 10)
	{
		s = 'a';

		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
		i++;
	}
}
