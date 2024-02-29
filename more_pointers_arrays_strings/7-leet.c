/**
 * leet - encodes a string into leet
 * @s: a string
 *
 * Return: the newly leeted string
 */
char *leet(char *s)
{
	char alpha[] = "aeotl";
	char leet[] = "43071";
	int ii = 0, jj = 0;
	int kk;

	while (alpha[jj] != '\0')
		jj = jj + 1;

	while (s[ii] != '\0')
	{
		for (kk = 0 ; kk < jj ; kk++)
		{
			if (s[ii] == alpha[kk] || s[ii] == alpha[kk] - 32)
				s[ii] = leet[kk];
		}
		ii = ii + 1;
	}

	return (s);
}

