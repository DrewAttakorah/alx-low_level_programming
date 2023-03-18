#include <stdio.h>
/**
 * main-main code block in c
 * Description: Prints all single digit numbers of base 10
 * starting from 0 followed by a new line
 * Return: 0
 */
int main(void)
{
	int x = 0;

	for (x = 0; x <= 10; x++)
	{
		putchar(x % 10 + '0');
	}
	putchar('\n');

	return (0);
}
