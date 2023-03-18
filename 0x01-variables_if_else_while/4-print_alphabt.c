#include <stdio.h>

/**
 * main - main code block in c
 * Description: Program prints the alphabets in lowercase, followed by
 * a new line and does not print q and e
 * Return: 0
 */
int main(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
