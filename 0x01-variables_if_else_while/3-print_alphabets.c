#include <stdio.h>
/**
 * main - main code block in c
 * Description: A program that prints the alphabets
 * in lowercase and then in uppercase
 * Return: 0
 */
int main(void)
{
	char a,b;

	for (a = 'a'; a = 'z'; a++)
	{
		putchar(a);
		putchar('\n');
	}

	for (b = 'A'; b = 'Z'; b++)
	{
		putchar(b);
		putchar('\n');
	}
	return (0);
}
