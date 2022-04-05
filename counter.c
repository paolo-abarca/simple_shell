#include "main.h"

/**
 * counter - word count function
 *
 * @string: is the string
 * Return: the number of words
 */

int counter(char *string)
{
	int i;
	int word = 0;
	int counter_word = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		/* this condition is to know if it is a word */
		if (word == 0 && (string[i] != ' ' && string[i] != '\n'
			&& string[i] != '\t' && string[i] != '\r'))
		{
			counter_word++;
			word = 1;
		}

		/* this condition is to know if it is a delimiter */
		else if (word == 1 && (string[i] == ' ' || string[i] ==
			'\n' || string[i] == '\t' || string[i] == '\r'))
		{
			word = 0;
		}
	}
	return (counter_word);
}
