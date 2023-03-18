#include <stdio.h>
/**
 * main - main code block in c
 * Description: Program prints single digit numbers of base 10 from 0
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	putchar('\n');

	return (0);
}
