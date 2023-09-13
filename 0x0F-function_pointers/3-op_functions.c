#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds 2 integers
 * @a: first integer
 * @b: secod integer
 *
 * Return: Sum of the two.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts 2 integers
 * @a: first integer
 * @b: secod integer
 *
 * Return: Subtraction of the two.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies 2 integers
 * @a: first integer
 * @b: secod integer
 *
 * Return: Multiplication of the two.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides 2 integers
 * @a: first integer
 * @b: secod integer
 *
 * Return: Division of the two.
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Modal of 2 integers
 * @a: first integer
 * @b: secod integer
 *
 * Return: Modal of the two.
 */
int op_add(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
return (a % b);
}
