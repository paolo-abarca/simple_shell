#include "main.h"

/**
 * word_counter - word count function
 * @string: is the string
 * Return: the number of words
 */
unsigned int word_counter(char *string)
{
	unsigned int i = 0, word = 0, count_word = 0;

	while (string[i] != '\0')
	{
		if (string[i] != ' ')
			word = 1;
		if ((word && string[i + 1] == ' ') || (word && string[i + 1] == '\0'))
		{
			++count_word;
			word = 0;
		}
		++i;
	}
	return (count_word);
}

/**
 * tokenizer - function that tokenizes the text string
 * @string: is the string
 * Return: the array with the tokens inside
 */
char **tokenizer(char *string)
{
	char delimiter[] = " \t\n\r";
	unsigned int counter, i;
	char **array, *token;

	string[_strlen(string) - 1] = '\0';
	counter = word_counter(string);
	if (counter == 0)
		return ('\0');

	array = malloc((sizeof(char *) * (counter + 1)));
	if (array == NULL)
		return ('\0');

	i = 0;
	token = strtok(string, delimiter);
	while (token != NULL)
	{
		array[i] = malloc(_strlen(token) + 1);
		if (array[i] == NULL)
		{
			array_free(array);
			return ('\0');
		}
		_strncpy(array[i], token, _strlen(token) + 1);
		token = strtok(NULL, delimiter);
		++i;
	}
	array[i] = NULL;
	return (array);
}
