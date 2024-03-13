#include <stdlib.h>

/**
 * wordcount - counts the number of words in a string
 * @str: the string
 *
 * Return: the number of words in the string
 *
 */
int wordcount(char *str)
{
	int nwords = 0;
	int ii;

	while (str[ii] != '\0')
	{
		if (((str[ii + 1] == ' ') || (str[ii + 1] == '\0')) && (str[ii] != ' '))
			nwords += 1;
		ii += 1;
	}

	return (nwords);
}

/**
 * strtow - splits a string into words
 * @str: the string
 *
 * Return: NULL, if failure
 *         a pointer to the array of strings otherwise
 *
 */
char **strtow(char *str)
{
	char **words;
	int nwords = 0;
	int wordstart, wordend;
	int ii = 0, jj = 0;
	int kk;

	if ((*str == '\0') || (str == NULL))
		return (NULL);

	nwords = wordcount(str);
	if (nwords == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (nwords + 1));
	if (words == NULL)
		return (NULL);

	for (ii = 0 ; ii < nwords ; ii++)
	{
		while (str[jj] == ' ')
			jj += 1;
		wordstart = jj;
		while (str[jj] != ' ')
			jj += 1;
		wordend = jj;

		words[ii] = malloc(sizeof(char) * (wordend - wordstart));
		if (words[ii] == NULL)
		{
			for (kk = 0 ; kk < ii; kk++)
				free(words[kk]);
			free(words);
			return (NULL);
		}

		for (kk = wordstart ; kk < wordend ; kk++)
			words[ii][kk - wordstart] = str[kk];
		words[ii][wordend - wordstart] = '\0';
	}
	words[nwords] = '\0';

	return (words);
}

