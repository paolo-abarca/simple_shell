#include "main.h"

/**
 * check_string - check the string for delimiters
 *
 * @string: is the string
 * Return: 1 if no delimiters found and 0 if found
 */

int check_string(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ' && string[i] != '\n')
		{
			if (string[i] != '\t')
			{
				return (1);
			}
		}
	}

	return (0);
}
