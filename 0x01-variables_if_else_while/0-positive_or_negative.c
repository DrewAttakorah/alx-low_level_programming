#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*Search random numbers and compare to zero*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0) 
	{
		printf("is zero");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else
	{
	return (0);
	}
}