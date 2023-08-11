#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Function that assigns a random number to the variable n.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number: %d\n", n);
	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n == 0)
	{
	printf("is zero\n");
	}
	else
	{
	printf("is negative\n");
	}
	return (0);
}
