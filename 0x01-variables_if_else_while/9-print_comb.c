#include <stdio.h>
/**
 * main - main code block in c
 * Description: Code Bomb
 * Return: 0
 */
int main(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		putchar(x % 10 + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
