#include "main.h"

/**
 * check_builtin - execute built-ins
 *@line: command line
 *@command: separate tokens
 *@retVal: return value of exit
 * Return: void
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
 * built_env - prints the environment
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
