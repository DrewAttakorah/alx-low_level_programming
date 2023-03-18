#include <stdio.h>
/**
 * main - main code block
 * Description: A program that prints the alphabet in lowercase
 * followed by a new line
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	return (0);
}
