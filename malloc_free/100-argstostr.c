#include <stdlib.h>

/**
 * argstostr - concatenates strings
 * @ac: the number of strings
 * @av: the strings
 *
 * Return: NULL, if failure
 *         a pointer to the string otherwise
 *
 */
char *argstostr(int ac, char **av)
{
	char *cat;
	int sizetot = 0;
	int ii, jj;
	int kk = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (ii = 0 ; ii < ac ; ii++)
	{
		jj = 0;
		while (av[ii][jj] != '\0')
			jj += 1;
		sizetot += jj + 1;
	}
	sizetot += 1;

	cat = malloc(sizeof(char) * sizetot);
	if (cat == NULL)
		return (NULL);

	for (ii = 0 ; ii < ac ; ii++)
	{
		jj = 0;
		while (av[ii][jj] != '\0')
		{
			cat[kk] = av[ii][jj];
			jj += 1;
			kk += 1;
		}
		cat[kk] = '\n';
		kk += 1;
	}
	cat[kk] = '\0';

	return (cat);
}

