/**
 * swap_int - swaps the values of two integers
 * @a: an input pointer
 * @b: another input pointer
 *
 *
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

