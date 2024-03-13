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
 * wordlength - finds the length of a given word in a string
 * @str: the string
 * @startchar: the char to start at
 * @wordstart: the first char in the word
 * @wordend: the last char in the word
 *
 * Return: the length of the word
 *
 */
int wordlength(char *str, int *startchar, int *wordstart, int *wordend)
{
	int length = 0;

	while (str[*startchar] == ' ')
		*startchar += 1;
	*wordstart = *startchar;
	while ((str[*startchar] != ' ') && (str[*startchar] != '\0'))
	{
		length += 1;
		*startchar += 1;
	}
	*wordend = *startchar;

	return (length);
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
	int nwords = 0, wordstart = 0, wordend = 0;
	int length;
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
		length = wordlength(str, &jj, &wordstart, &wordend);

		words[ii] = malloc(sizeof(char) * (length + 1));
		if (words[ii] == NULL)
		{
			for (kk = 0 ; kk < ii ; kk++)
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

