/**
 * leet - encodes a string into leet
 * @s: a string
 *
 * Return: the newly leeted string
 */
char *leet(char *s)
{
	char alpha[6] = "aeotl";
	char leet[6] = "43071";
	int ii = 0;
	int kk;

	while (s[ii] != '\0')
	{
		for (kk = 0 ; kk <= 4 ; kk++)
		{
			if (s[ii] == alpha[kk] || s[ii] == alpha[kk] - 32)
				s[ii] = leet[kk];
		}
		ii = ii + 1;
	}

	return (s);
}

