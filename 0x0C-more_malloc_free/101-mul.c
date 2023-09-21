#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * str_to_int - Converts a string to an integer.
 * @str: The string to convert.
 *
 * Return: The integer value of the string.
 */
int str_to_int(const char *str);

/**
 * multiply - Multiplies two integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The result of multiplying num1 and num2.
 */
int multiply(int num1, int num2);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        return (98);
    }

    num1 = str_to_int(argv[1]);
    num2 = str_to_int(argv[2]);
    result = multiply(num1, num2);

    char result_str[12]; /* Maximum digits for a 32-bit integer */
    int i = 0;
    while (result != 0)
    {
        result_str[i++] = (result % 10) + '0';
        result /= 10;
    }
    if (i == 0)
    {
        result_str[i++] = '0';
    }
    result_str[i] = '\0';

    i--;
    while (i >= 0)
    {
        putchar(result_str[i]);
        i--;
    }
    putchar('\n');

    return (0);
}

/**
 * str_to_int - Converts a string to an integer.
 * @str: The string to convert.
 *
 * Return: The integer value of the string.
 */
int str_to_int(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-')
    {
        sign = -1;
        i = 1;
    }

    for (; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
        {
            return (98);
        }
        result = result * 10 + (str[i] - '0');
    }

    return (result * sign);
}

/**
 * multiply - Multiplies two integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The result of multiplying num1 and num2.
 */
int multiply(int num1, int num2)
{
    return (num1 * num2);
}

