/**
 * sqrt_checker - checks if a number is the square root of another number
 * @n: the number to calculate the square root of
 * @x: the number to check whether it is the square root of @n
 *
 * Return: the square root of @n
 *         -1, if @n has no natural square root
 *
 */
int sqrt_checker(int n, int x)
{
	if (n / x < x)
		return (-1);
	else if ((n % x != 0) || ((n % x == 0) && (n / x > x)))
		x = sqrt_checker(n, x + 1);

	return (x);
}

/**
 * _sqrt_recursion - calls sqrt_checker
 * @n: the number to calculate the square root of
 *
 * Return: the square root of @n
 *         -1, if @n has no natural square root
 *
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 1)
		return (-1);
	else
		return (sqrt_checker(n, x));
}
