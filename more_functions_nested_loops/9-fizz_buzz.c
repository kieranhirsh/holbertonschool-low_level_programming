#include <stdio.h>
#include <string.h>

/**
 * main - plays fizzbuzz up to 100
 *
 * Return: Always 0.
 */
int main(void)
{
	char word[32];
	int ii;

	for (ii = 1 ; ii <= 100; ii++)
	{
		word[0] = '\0';
		if ((ii % 3) == 0)
			strcat(word,"Fizz");
		if ((ii % 5) == 0)
			strcat(word,"Buzz");
		if (word[0] == '\0')
			printf("%d ",ii);
		else
			printf("%s ",word);
	}
	printf("\n");

	return (0);
}

