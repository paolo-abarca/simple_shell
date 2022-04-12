#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{	char *string = NULL, **array = NULL;
	size_t string_size = 0;
	int status = 0, retVal = 0;
	char i = '0';
	pid_t pid;

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "('0_0)=c[_] ", 12);
		if (getline(&string, &string_size, stdin) == EOF)
			break;
		i++;
		if (check_string(string) == 0)
			continue;
		array = tokenizer(string);
		if (array == NULL)
			continue;
		if (commands_functions(string, array, &retVal) == 0)
		{
			pid = fork();
			if (pid == 0)
			{
				if (execve(findpath(array[0], &retVal, i), array, environ) == -1)
				{
					parent_free(string, array);
					exit(retVal);
				}
			}
			else
			{
				wait(&status);
				parent_free(string, array);
				if (WIFEXITED(status))
					retVal = WEXITSTATUS(status); }
			string = NULL; }
		else
			array_free(array); }
	free(string);
	exit(status);
}
