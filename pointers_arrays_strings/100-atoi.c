/**
 * _atoi - converts a string to an integer
 *         only considers the first number in the string
 *         considers every '-' before the first number
 * @s: the string to be converted
 *
 * Return: @num: the int
 *         0 if there is no number in the string
 */
int _atoi(char *s)
{
	int ii = 0, num = 0;
	int numstart = -1, numend = -1;
	int mult = 1;

	while (numstart < 0)
	{
		if (s[ii] >= 48 && s[ii] <= 57)
			numstart = ii;
		else if (s[ii] == 0)
			return (0);
		else
			ii += 1;
	}
	while (numend < 0)
	{
		if (s[ii] < 48 || s[ii] > 57)
			numend = ii - 1;
		else
			ii += 1;
	}
	for (ii = numstart - 1 ; ii >= 0 ; ii--)
	{
		if (s[ii] == 45)
			mult = mult * (-1);
	}
	for (ii = numend ; ii >= numstart ; ii--)
	{
		num += (s[ii] - 48) * mult;
		if (ii != numstart)
			mult *= 10;
	}

	return (num);
}

