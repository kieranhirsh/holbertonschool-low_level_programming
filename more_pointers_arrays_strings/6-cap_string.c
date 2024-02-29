/**
 * cap_string - capitalised all the words of a string
 * @s: a string
 *
 * Return: the newly uppercased string
 */
char *cap_string(char *s)
{
	char seps[] = " \t\n,;.!?\"(){}";
	int ii = 0, jj = 0;
	int next = 1;
	int kk;

	while (seps[jj] != '\0')
		jj = jj + 1;

	while (s[ii] != '\0')
	{
		if (next == 1)
		{
			if (s[ii] >= 97 && s[ii] <= 122)
				s[ii] = s[ii] - 32;
			next = 0;
		}
		for (kk = 0 ; kk < jj ; kk++)
		{
			if (s[ii] == seps[kk])
				next = 1;
		}
		ii = ii + 1;
	}

	return (s);
}

