/**
 * prime_checker - checks if a number is prime
 * @n: the number to calculate the primeness of
 * @x: the number to check whether it is a factor of @n
 *
 * Return: 1, if @n is prime
 *         0, otherwise
 *
 */
int prime_checker(int n, int x)
{
	if (x > n / x)
		return (1);
	else if (n % x != 0)
		return (prime_checker(n, x + 2));
	else if (n % x == 0 && n == x)
		return (1);
	else
		return (0);
}

/**
 * is_prime_number - calls prime_checker
 * @n: the number to check the primeness of
 *
 * Return: 1, if @n is prime
 *         0, otherwise
 *
 */
int is_prime_number(int n)
{
	int x = 3;

	if ((n < 2) || (n % 2 == 0))
		return (0);
	else if (n == 2)
		return (1);
	else
		return (prime_checker(n, x));
}
