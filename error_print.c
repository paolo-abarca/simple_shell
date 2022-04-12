#include "main.h"

/**
 * error_printing - print error messages
 * @av: is the path folder
 * @count: tokens
 * @array: the original command
 * Return: Always 0
 */
void error_printing(char *av, char count, char *array)
{
	print_string(av, 1);
	print_string(": ", 1);
	_write(count);
	print_string(": ", 1);
	print_string(array, 1);
}

/**
 * print_string - print the error_printing strings
 * @string: char string
 * @new_line: is for a line break
 * Return: void
 */
void print_string(char *string, int new_line)
{
	int i;

	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i] != '\0'; i++)
		write(STDOUT_FILENO, &string[i], 1);
	if (new_line == 0)
		write(STDOUT_FILENO, "\n", 1);
}
/**
 * _write - Entry point
 * @c: character
 * Return: Always 0
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
