/**
 * factorial - calculates the factorial of a number
 * @n: the given number
 *
 * Return: @fact - the factorial of @n
 *
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		fact = -1;
	}
	else if (n == 0)
	{
		fact = 1;
	}
	else
	{
		fact = n;
		fact *= factorial(n - 1);
	}

	return (fact);
}

