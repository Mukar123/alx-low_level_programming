#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *
 * main - code opener
 *
 * Description: using the string
 *
 *
 */
int main(void)
{
	int n, lasDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10
	if (lasDigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lasDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lasDigit);
	}
	else if (lastDigit < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
