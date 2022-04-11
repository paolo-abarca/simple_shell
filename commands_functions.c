#include "main.h"

/**
 * commands_functions - exclusive function for exit, env and cd commands
 *
 * @array: is the tokenized string
 * @string: is the normal text string
 * Return: if the command is neither exit nor env, 0 will be returned
 */

int commands_functions(char **array, char *string)
{
	char *_exit = "exit", *_env = "env";

	if (_strncmp(array[0], _exit, 4) == 0)
	{
		parent_free(string, array);
		exit(0);
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
	while (environ[i] != NULL)
	{
		length = _strlen(environ[i]);
		write(STDOUT_FILENO, environ[i], length);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
