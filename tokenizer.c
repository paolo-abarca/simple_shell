#include "main.h"

/**
 * find_length - calculate the lenght of command line
 *@s: char pointer
 * Return: length of pointer
 */
unsigned int word_counter(char *string)
{
	unsigned int count_word = 0, i = 0, word = 0;

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
 * s_tok - separate line in tokens
 * @str: command line
 * Return: char
 */
char **tokenizer(char *string)
{
	char delimiter[] = " \t\n\r";
	unsigned int len, i;
	char **array, *token;

	string[_strlen(string) - 1] = '\0';
	len = word_counter(string);
	if (len == 0)
		return ('\0');

	array = malloc((sizeof(char *) * (len + 1)));
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
