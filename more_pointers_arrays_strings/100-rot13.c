/**
 * rot13 - encodes a string using rot13
 * @s: a string
 *
 * Return: the newly encoded string
 */
char *rot13(char *s)
{
	char alpha[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int ii = 0;
	int kk;

	while (s[ii] != '\0')
	{
		for (kk = 0 ; kk <= 51 ; kk++)
		{
			if (s[ii] == alpha[kk])
			{
				s[ii] = rot[kk];
				break;
			}
		}
		ii = ii + 1;
	}

	return (s);
}

