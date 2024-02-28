/**
 * reverse array - reverses an array of integers
 * @a: the given array
 * @n: the size of @a
 */
void reverse_array(int *a, int n)
{
	int temp;
	int ii;

	for (ii = 0 ; ii < (n / 2) ; ii++)
	{
		temp = a[ii];
		a[ii] = a[(n - 1) - ii];
		a[(n - 1) - ii] = temp;
	}
}

