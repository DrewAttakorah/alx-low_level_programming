#include <stdio.h>
/**
 * main - this is the main func
 * Description: Prints all the numbers of base 16
 * in lowercase followed by a new line
 * Return: 0
 */
int main(void)
{
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
		putchar('\n');
		return (0);
}
