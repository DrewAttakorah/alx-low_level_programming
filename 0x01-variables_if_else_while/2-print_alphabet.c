#include <stdio.h>
/**
 * main - main code block
 * Description: A program that prints the alphabet in lowercase
 * followed by a new line
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar("\n");

	return (0);
}
