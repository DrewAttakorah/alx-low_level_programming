#include <stdio.h>
/**
 * main - main code block in c
 * Description: A program that prints the alphabets
 * in lowercase and then in uppercase
 * Return: 0
 */
int main(void)
{
	char aa = 'a';

	for (aa = 'a'; aa = 'z'; aa++;)
	{
		putchar(aa);
		putchar('\n');
	}

	char aA = 'A';

	for (aA = 'A'; aA = 'Z'; aA++;)
	{
		putchar(aA);
		putchar('\n');
	}
	return (0);
}
