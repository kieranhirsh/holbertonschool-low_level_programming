#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the buffer that the function will use to store the result
 * @size_r: the size of @r
 *
 * Return: the result of the addition
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0;
	int len_larger;
	int numn1, numn2;
	int carry = 0;
	int ii;

	while (n1[len_n1] != '\0')
		len_n1 += 1;
	while (n2[len_n2] != '\0')
		len_n2 += 1;

	if (len_n1 >= len_n2)
		len_larger = len_n1;
	else
		len_larger = len_n2;

	r[0] = '0';

	for (ii = 0 ; ii <= len_larger ; ii++)
	{
		if (ii >= len_n1)
			numn1 = 0;
		else
			numn1 = n1[len_n1 - ii - 1] - 48;
		if (ii >= len_n2)
			numn2 = 0;
		else
			numn2 = n2[len_n2 - ii - 1] - 48;

		r[len_larger - ii] = ((numn1 + numn2 + carry) % 10) + 48;

		if (numn1 + numn2 + carry > 9)
			carry = 1;
		else
			carry = 0;
	}

	if (len_larger >= size_r && r[0] == '1')
		return (0);

	if (r[0] == '0')
	{
		for (ii = 0 ; ii < len_larger ; ii++)
			r[ii] = r[ii + 1];
		r[len_larger] = '\0';
	}

	return (r);
}

