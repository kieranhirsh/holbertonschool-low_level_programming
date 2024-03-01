/**
 * infinite_add - adds two numbers
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the buffer that the function will use to store the result
 * @size_r: the size of @r
 *
 * Return: 0 if the buffer is too small to store the result
 *         the result of the addition otherwise
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0;
	int len_larger, ii;
	int numn1, numn2;
	int carry = 0;

	while (n1[len_n1] != '\0')
		len_n1 += 1;
	while (n2[len_n2] != '\0')
		len_n2 += 1;
	if (len_n1 >= len_n2)
		len_larger = len_n1;
	else
		len_larger = len_n2;
	if (len_larger + 1 >= size_r)
		return (0);
	r[0] = '0';
	for (ii = 1 ; ii <= len_larger ; ii++)
	{
		if (ii > len_n1)
			numn1 = 0;
		else
			numn1 = n1[len_n1 - ii] - 48;
		if (ii > len_n2)
			numn2 = 0;
		else
			numn2 = n2[len_n2 - ii] - 48;
		r[len_larger - ii] = ((numn1 + numn2 + carry) % 10) + 48;
		if (numn1 + numn2 + carry > 9)
			carry = 1;
		else
			carry = 0;
	}
	if (carry == 1)
	{
		for (ii = len_larger ; ii >= 1 ; ii--)
			r[ii] = r[ii - 1];
		r[0] = '1';
		r[len_larger + 1] = '\0';
	}
	return (r);
}

