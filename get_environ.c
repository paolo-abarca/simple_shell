#include "main.h"

/**
 * _getenv - get the folders from the PATH variable
 * @value: is the PATH
 * Return: all the folders in the PATH
 */
char *_getenv(const char *value)
{
	int len = _strlen((char *)value);
	char **env = environ;

	while (*env != NULL)
	{
		if (_strncmp(*env, (char *)value, len) == 0 && env[0][len] == '=')
			return (*env + len + 1);
		env++;
	}
	return (NULL);
}
