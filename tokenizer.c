#include "main.h"

/**
 * tokenizer - function that tokenizes the text string
 *
 * @string: is the string
 * @delimiter: is the delimiter
 * Return: the array with the tokens inside
 */

char **tokenizer(char *string, const char *delimiter)
{
	char **array;
	char *duplicate_string;
	int i = 0;
	char *token;

	/* separating memory space */
	array = malloc(sizeof(char *) * (counter(string) + 1));

	if (array != NULL)
	{
		/* duplicating the text string */
		duplicate_string = strdup(string);

		/* tokenizing the duplicate string */
		token = strtok(duplicate_string, delimiter);

		i = 0;
		while (token != NULL)
		{
			array[i] = token;
			token = strtok(NULL, delimiter);
			i++;
		}
		/* the last space will be null */
		array[i] = NULL;
		free(token);
		return (array);
	}

	else
	{
		/* printing error message */
		perror("the array is null");
		exit(98);
	}
}
