#include "main.h"

/**
 * commands_functions - exclusive function for exit and env
 * @string: is the normal text string
 * @array: is the tokenized string
 * @retVal: return value of exit
 * Return: if the command is neither exit or env, 0 will be returned
 */

int commands_functions(char *string, char **array, int *retVal)
{
	char *_exit = "exit", *_env = "env";

	if (_strncmp(array[0], _exit, 4) == 0)
	{
		parent_free(string, array);
		exit(*retVal);
	}
	else if (_strncmp(array[0], _env, 3) == 0)
	{
		my_env(environ);
		return (1);
	}
	else
		return (0);
}
/**
 * my_env - is the function that prints all global variables
 * @environ: environ
 *
 * Return: void
 */
void my_env(char **environ)
{
	unsigned int i, length;

	i = 0;
	while (environ[i])
	{
		length = _strlen(environ[i]);
		write(STDOUT_FILENO, environ[i], length);
		write(STDOUT_FILENO, "\n", 1);
		++i;
	}
}
