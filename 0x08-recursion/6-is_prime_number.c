int is_prime_recursive(int n, int divisor);

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);  /* Not a prime number*/
	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - Helper function to check if a number is prime
 * @n: The number to check
 * @divisor: The current divisor being tested
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor >= n)
		return (1);  /* It's a prime number*/
	if (n % divisor == 0)
		return (0);  /* Not a prime number*/
	return (is_prime_recursive(n, divisor + 1));
}
