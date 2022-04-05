#include "main.h"

/**
 * main -Entry point
 * @argc: argmuent counter unused
 * @argv: argument vector and name program
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char *string = NULL;
	size_t string_size = 0;
	int i = 0;
	char **array = NULL;

	while (1)
	{
		/*PROMPT*/
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "('0_0)=c[_] ", 12);

		/* getting the parameters */
		if (getline(&string, &string_size, stdin) != EOF)
		{
			i++;
			/* checking the strings */
			if (check_string(string))
			{
				/* separating by tokens */
				array = tokenizer(string, " \n\t\r");
				/* executing the commands */
				executing_comand(array, argv[0], i);
				/* freeing the text string */
				array_free(array);
			}
			else
			{
				free(string);
				string = NULL;
			}
		}
		else
		{
			printf("logout\n");
			free(string);
			exit(0);
		}
	}
	return (0);
}
