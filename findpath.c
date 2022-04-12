#include "main.h"

/**
 * findpath - find the command path folder
 * @array: the command
 * @retVal: return value of exit
 * @num: number for orden
 * Return: the original command
 */
char *findpath(char *array, int *retVal, char num)
{
	struct stat st;
	char *path, *reserved_array;
	char *token_path;
	char *original_command;

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
	error_printing(path, num, reserved_array);
	print_string(": not found", 0);
	free(array);
	*retVal = 127;
	return (NULL);
}
