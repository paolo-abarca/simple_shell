#include "main.h"

/**
 * findpath - find the directory of a command
 *@command: string with the command
 *@retVal: return value of exit
 * Return: the directory of the command
 */
char *findpath(char *array, int *retVal)
{
	char *path, *reserved_array;
	struct stat st;
	char *original_command;
	char *token_path;

	if (stat(array, &st) == 0)
		return (array);

	path = _getenv("PATH");
	token_path = strtok(path, ":");
	reserved_array = array;
	array = _strcat("/", array);

	while (token_path != NULL)
	{
		original_command = _strcat(token_path, array);
		if (stat(original_command, &st) == 0)
		{
			free(array);
			return (original_command);
		}
		free(original_command);
		token_path = strtok(NULL, ":");
	}
	error_printing(path, word_counter(array), reserved_array);
	print_string(": not found", 0);
	free(array);
	*retVal = 127;
	return (NULL);
}
