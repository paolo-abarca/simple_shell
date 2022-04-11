#include "main.h"
/**
 * main - Entry point
 * @argc: argument counter unused
 * @argv: argument vector and name program
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{	char *string = NULL, **array = NULL;
	size_t string_size = 0;
	char i = '0';
	int status = 0;
	pid_t pid;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "('0_0)=c[_] ", 12);
		if (getline(&string, &string_size, stdin) == EOF)
		{	printf("logout\n");
			free(string);
			exit(0); }
		i++;
		if (check_string(string) == 0)
		{	free(string);
			string = NULL;
			continue; }
		array = tokenizer(string);
		if (array == NULL)
			continue;
		if (commands_functions(array, string) == 0)
		{
			pid = fork();
			if (pid == 0)
			{
				if (execve(findpath(array[0], argv[0], i), array, environ) == -1)
				{
					parent_free(string, array);
					exit(0); } }
			else
			{	wait(&status);
				parent_free(string, array); }
			string = NULL; }
		else
			array_free(array);
	}
	free(string);
	exit(0);
}
