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
	if (n > 0)
	{
	printf("%d is positive\n");
	}
	else if (n == 0)
	{
	printf("%d is zero\n");
	}
	else
	{
	printf("%d is negative\n");
	}
	return (0);
}
