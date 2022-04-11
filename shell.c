#include "main.h"
/**
 * main - UNIX command line interpreter
 * Return: Always 0 (Success)
 */
int main(void)
{	char *string = NULL, **array = NULL;
	size_t string_size = 0;
	int status = 0, retVal = 0;
	pid_t pid;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "('0_0)=c[_] ", 12);
		if (getline(&string, &string_size, stdin) == EOF)
			break;
		if (check_string(string) == 0)
			continue;
		array = s_tok(string);
		if (array == NULL)
			continue;
		if (check_builtin(string, array, &retVal) == 0)
		{
			pid = fork();
			if (pid == 0)
			{
				if (execve(findpath(array[0], &retVal), array, environ) == -1)
				{
					_free_parent(string, array);
					exit(retVal);
				}
			}
			else
			{
				wait(&status);
				_free_parent(string, array);
				if (WIFEXITED(status))
					retVal = WEXITSTATUS(status);
			}
			string = NULL;
		}
		else
			_free_double_pointer(array);
	}
	free(string);
	exit(status);
}
