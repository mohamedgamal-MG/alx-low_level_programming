#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entner.
 * Description: to know num is - , +.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d num is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d num is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d num is negative\n", n);
	}
	return (0);
}
