#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters
 * @...: Variable number of parameters
 *
 * Return: If n == 0 return 0.
 * Else the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ts;
	unsigned int i, sum = 0;

	va_start(ts, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ts, int);

	va_end(ts);

	return (sum);
}
