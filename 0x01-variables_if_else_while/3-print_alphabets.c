#include <stdio.h>
/**
 * main - main code block in c
 * Description: A program that prints the alphabets
 * in lowercase and then in uppercase
 * Return: 0
 */
int main(void)
{
	char ch, cj;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (cj = 'A'; cj <= 'Z'; cj++)
	{
		putchar(cj);
		putchar('\n');
	}

	return (0);
}
