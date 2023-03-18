#include <stdio.h>
/**
 * main-main code block in c
 * Description: Prints alphabets from the back
 * Return: 0
 */
int main(void)
{
	char ant = 'a';

	for (ant = 'a'; ant >= 'a'; ant--)
	{
		putchar(ant);
	}
	putchar('\n');

	return (0);
}
