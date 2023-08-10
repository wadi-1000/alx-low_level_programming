#include <stdio.h>
/**
 * main - function that prints sizes of various types with sizeof
 * Return: 0 if successful
 */
int main(void)
{
printf("Size of a char: %zu bytes\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of a long int: %zu\n", sizeof(long int));
printf("Size of a long long int: %zu\n", sizeof(long long int));
printf("Size of a float: %zu\n", sizeof(float));
}
