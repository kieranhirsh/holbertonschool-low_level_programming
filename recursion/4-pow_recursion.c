/**
 * _pow_recursion - performs exponentiation
 * @x: the base
 * @y: the exponent
 *
 * Return: @pow - @x to the power of @y
 *
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		pow = -1;
	}
	else if (y == 0)
	{
		pow = 1;
	}
	else
	{
		pow = x;
		pow *= _pow_recursion(x, y - 1);
	}

	return (pow);
}

