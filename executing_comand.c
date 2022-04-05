#include "main.h"

/**
 * executing_comand - function that executes commands and handles errors
 *
 * @array: is the string
 * @argv: is the name of the executor
 * @num: the number displayed in the errors
 * Return: 0 on error
 */

int executing_comand(char **array, char *argv, int num)
{
	pid_t pid = 0;
	int status = 0;
	struct stat st;

	if (stat(array[0], &st) == 0)
	{
		if (access(array[0], X_OK) == 0)
		{
			pid = fork();
			if (pid == -1)
			{
				perror("Error");
				exit(1);
			}

			if (pid == 0)
			{
				execve(array[0], array, NULL);
			}

			else
			{
				wait(&status);
			}
		}

		else
		{
			dprintf(STDERR_FILENO, "%s: %d: %s: permission denied\n"
					, argv, num, array[0]);
		}
		return (0);
	}
	else
	{
		dprintf(STDERR_FILENO, "%s: %d: %s: command not found\n"
				, argv, num, array[0]);
	}
	return (0);
}
