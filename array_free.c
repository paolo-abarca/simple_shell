#include "main.h"

/**
 * array_free - release the array
 * @array: contains the tokens of the text string
 */
void array_free(char **array)
{
	unsigned int i = 0;

	if (array == NULL)
		return;

	while (array[i])
	{
		free(array[i]);
		++i;
	}

	if (array[i] == NULL)
		free(array[i]);

	free(array);
}

/**
 * parent_free - release the string
 * @string: is the string
 * @array: the tokenized string
 * Return: void
 */
void parent_free(char *string, char **array)
{
	free(string);
	array_free(array);
}
