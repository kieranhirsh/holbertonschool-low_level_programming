/**
 * _isdigit - checks whether a given character is a digit
 * @c: the character to be checked
 *
 * Return: 1 if @c is a digit
 *         0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}

