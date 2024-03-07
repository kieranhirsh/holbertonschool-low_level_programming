/**
 * palindrome_check - checks whether a string is a palindrome
 * @s: the string to check
 * @len: the length of the string to check
 *
 * Return: 1 if a palindrome
 *         0 if not a palindrome
 *
 */
int palindrome_check(char *s, int len)
{
	if (s[0] == '\0')
		return (1);
	else if (s[0] == s[len - 1])
		return (palindrome_check(s + 1, len - 2));
	else
		return (0);
}

/**
 * length_palindrome - finds the length of a string
 * @s: the string to find the length of
 * @len: the recursive length
 *
 * Return: the length of the string
 *
 */
int length_palindrome(char *s, int len)
{
	if (s[len] == '\0')
	{
		return (len);
	}
	else
	{
		len = length_palindrome(s, len + 1);

		return (len);
	}
}

/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if a palindrome
 *         0 if not a palindrome
 *
 */
int is_palindrome(char *s)
{
	int len;

	len = length_palindrome(s, 0);

	return (palindrome_check(s, len));
}

